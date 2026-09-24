#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 42;
	
	printf("Value : %d\n",*ptr);
	
	free(ptr);  // memory released
	ptr = NULL;
	*ptr = 57;
	// ptr is now doing (still points to freed memory)
	printf("%d",*ptr); // ?invalid access
}
