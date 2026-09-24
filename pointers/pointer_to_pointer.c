#include<stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	int **q = &p;   // pointer to pointer
	
	printf("Value of a = %d\n",a);
	printf("Address of  a = %d\n",&a);
	printf("Address of p = %d\n",p);
	printf("Value of *p = %d\n",*p);
	
	printf("Value of (address of p) = %d\n",q);
	printf("Value of *q (address of a) = %d\n",*q);
	printf("Value of **q (address of a) = %d\n",**q);	
	
	return 0;
}
