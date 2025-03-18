#include<stdio.h>
int main(void){
	int x,y,temp;
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
	for(y=0;y<x-1;y++){
		for(int w=0;w<x-y-1;w++){
			if(a[w]>a[w+1]){
				temp=a[w+1];
				a[w+1]=a[w];
				a[w]=temp;
			}
		}
	}
	printf("\nafter sorting=");
	for(y=0;y<x;y++){
		printf("\t%d",a[y]);
	}
	return 0;
}
