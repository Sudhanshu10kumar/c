
#include <stdio.h>

void inarr(int a[], int num);  // Take array input
void outarr(int a[], int num); // Print array
int sercharr(int a[],int num,int key);

int main(void) {
    int n,key;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    int a[n];  // Declare array in main

    inarr(a, n);     // Call function to input array
    outarr(a, n);    // Call function to output array
    printf("what you want to serch:");
    scanf("%d",&key);
    sercharr(a,n,key);

    return 0;
}

void inarr(int a[], int num) {
	int x;
    for ( x = 0; x < num; x++) {
        printf("a[%d] = ", x);
        scanf("%d", &a[x]);  // Use &a[x]
    }
}

void outarr(int a[], int num) {
	int x;
    printf("Array elements: ");
    for ( x = 0; x < num; x++) {
        printf("%d ", a[x]);
    }
    printf("\n");
}

int sercharr(int a[],int num,int key){
	int flag=0,x;
	for(x=0;x<num;x++){
		if(a[x]==key){
			flag=1;	
		}	
	}
	if(flag==1){
		printf("your element is present is array");
	}
	else{
			printf("your element is not present");
	}
}

