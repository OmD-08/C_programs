#include<stdio.h>
int main(){
	int a = 10; // normal variable 
	int *p;  // pointer varible 
	p = &a;  // store addresss of a in p
	
	printf("Value of a = %d\n",a);
	printf("Address of a = %p\n",&a);
	printf("Address of a = %d\n",&a);
	printf("Pointer p stores address = %d\n",p);
	printf("Value pointed by p = %d\n",*p);
	
	return  0;
}
