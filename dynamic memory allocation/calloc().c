#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i;
int *arr;

	printf("Enter number of elements : ");
	scanf("%d",&n);

	// allocate memory using calloc
	arr = (int *)calloc(n,sizeof(int));

	if(arr == NULL){
	printf("Memory allocation failed");
	return 0;
	}

 	printf("\nValues stored initially (calloc initializes to 0) : \n");
	 for(i=0;i<n;i++){
 	printf("%d",arr[i]);  	// will print 0 for all elements
 	}
 
 	printf("\n\nEnter %d numbers : \n",n);
 	for(i=0;i<n;i++){
 	scanf("%d",&arr[i]);
 	}

	printf("\nNumbers you entered : \n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}

	free(arr); 		// release memory
	arr = NULL;

	printf("\n\nNumbers you entered : \n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	} 
	return  0;
	}	

