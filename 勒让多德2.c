#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float LRD(int n,int x);
int main(int argc, char *argv[]) {
	int n,x;
	scanf("%d,%d",&n,&x);
	if(n<0){
		printf("error");
	}
	else{
		float result=LRD(n,x);
	    printf("%.2lf",result);
	}
	return 0;
}
float LRD(int n,int x){
	float p;
	if(n==0){
	    p=1;
	}
	else if(n==1){
	    p=x;
	}
	else{
		p=((2*n-1)*x-LRD(n-1,x)-(n-1)*LRD(n-2,x))/n;
	}
    return p;
	return 0;
}