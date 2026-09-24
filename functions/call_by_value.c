#include<stdio.h>

void changeValue(int x){
	x = x + 10;            // modifying the copy
	printf("Inside function : x = %d\n",x);
}

int main(){
	int a =  5;
	printf("Before function call : a = %d\n",a);
	changeValue(a);   // call by value
	printf("After function call : a = %d\n",a);
	
	return 0;
}
