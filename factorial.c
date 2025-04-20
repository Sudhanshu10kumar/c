#include<stdio.h>
int factor(int);
int main(){
	int n,ans;
	printf("enter the number:");
	scanf("%d",&n);
	ans=factor(n);
	printf("factorial of %d is:%d",n,ans);
	return 0;
		
}

int factor(int num){
	if(num==1){
		return 1;
	}
	return (num*factor(num-1));

}
