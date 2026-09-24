#include<stdio.h>
int main(){
	int arr[] = {10,20,30,40,50};
	int *p = arr;  // points to first elemnt 
	int *q = &arr[2]; // points to last element
	int i;
	
	printf("Array elements :");
	for(i=0;i<5;i++){
		printf(" %d ",arr[i]);
	}
	
	printf("\n\n--- Pointer addition example ----\n");
	printf("Value at p (arr[0]) = %d\n",*p);
	printf("Value of (p + 1) = %d\n",*(p+1));
	printf("value of (p+2) = %d\n",*(p+2));
	printf("Value of (p+4) = %d\n",*(p+4));
	
	printf("\n Pointer Difference\n");
	
	printf("p points to : %d\n",*p);
	printf("q points to : %d\n",*q);
	
	printf("Difference (q - p) = %d elements\n",q - p);
	
	printf("value at (q - 2) = %d\n",*(q - 2));
	printf("Value at (q - 1) = %d\n",*(q-1));
	printf("Value at q = %d\n",*q);
	return 0;
}
