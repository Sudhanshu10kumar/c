#include<stdio.h>
int fevo_ser(int num);
int main(){
	int x,n,ans;
	printf("enter the term:");
	scanf("%d",&n);
	for(x=0;x<n;x++){
		ans=fevo_ser(x);
		printf("\t%d",ans);
	}
	
	
	return 0;
	
}

int fevo_ser(int num){
	if(num==0){
		return 0;
	}
	if(num<=2){
		return 1;
	}
	else{
		return (fevo_ser(num-1)+fevo_ser(num-2));
	}
}
