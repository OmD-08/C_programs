#include<stdio.h>
int main(){
	int *ptr = NULL ;
	int a = 10;
	// ptr = &a // pointer points to nothing
	
	if(ptr == NULL){
		printf("Pointer is NULL, *p = %d\n",ptr);
	}
	else {
		printf("Pointer is not a NULL, *p = %d",*ptr);	
	}
	
	// printf("a = %d",a);
	
	return 0;
}
