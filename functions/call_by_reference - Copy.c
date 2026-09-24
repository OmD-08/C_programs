#include<stdio.h>

void changeValue(int *x){
	*x = *x + 10;            // modifying the actual  variable using pointer
	printf("Inside function : x = %d\n",*x);
}

int main(){
	int a =  5;
	printf("Before function call : a = %d\n",a);
	changeValue(&a);   // passing address of 'a'
	printf("After function call : a = %d\n",a);
	
	return 0;
}

