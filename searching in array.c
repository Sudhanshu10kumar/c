#include<stdio.h>
int main(void){
	int x,y,z;
	int flag=0,ind;
	printf
	("enter the number of elements or an array:");
	scanf("%d",&x);
	int a[x];
	for(y=0;y<x;y++){
		printf("a[%d]=",y);
		scanf("%d",&a[y]);
	}
	printf("your array=");
	for(y=0;y<x;y++){
		printf("\t%d",a[y]);
	}
	printf("\nenter your scearched items=");
	scanf("%d",&z);
	for(y=0;y<x;y++){
		if(a[y]==z){
			flag=flag+1;
			ind=y;
			
		}
	}
	if(flag!=1){
		printf("your item is not in list");
	}
	else{
	printf("your item is in list at index %d",ind);
    }
	return 0;
}
