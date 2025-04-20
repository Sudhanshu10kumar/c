#include<stdio.h>
#include<math.h>

int factor(int nun1);
float sum(int num2);
int numer(int num3);

int main(){

	int n;
	float ans;

	printf("enter the last number:");
	scanf("%d",&n);

	ans=sum(n);

	printf("sum of the series=%f",ans);
	return 0;
}

int factor(int num1){
	int fact=1,x;
	for(x=1;x<=num1;x++){
		fact=fact*x;
	}
	return fact;
}

int numer(int num3){
	int x,numans;
	for(x=1;x<=num3;x++){
		numans=pow(x,x);
	}
	return numans;
}

float sum(int num2){
	int b,x;
	float a,add=0;
	for(x=1;x<=num2;x++){
		a=numer(x);
		b=factor(x);
		add=add+a/b;
	}
	return add;
}
