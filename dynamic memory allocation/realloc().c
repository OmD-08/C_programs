#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,new_n,i;
 int *arr;
 
 	printf("Enter the initial size : ");
 	scanf("%d",&n);
 
	 arr = (int *)malloc(n * sizeof(int));
 
 	if(arr == NULL){
 	printf("Memory not allocated");
 	return 0;
 	}

	printf("\nEnter %d numbers : \n",n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}

	// Now increase size
	printf("\nEnter new size (greater than old size):");
	scanf("%d",&new_n);

	arr = (int *)realloc(arr,new_n * sizeof(int));

	printf("\nEnter %d more values :\n",new_n - n);
	for(i=n;i<new_n;i++){
	scanf("%d",&arr[i]);
	}
	
	printf("\nAll values after realloc():\n");
	for(i=0;i<new_n;i++){
		printf(" %d ",arr[i]);
	}
 
    free(arr); // release memory
    
return  0;
}

