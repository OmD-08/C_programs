#include<stdio.h>
#include<stdlib.h>

int main(){

	int n,*arr;
	printf("Enter the  size of array : ");
	scanf("%d",&n);

	arr = (int *)malloc(n * sizeof(int));

	if(arr == NULL){
	printf("Memory not allowed");
	return 0;
	}
	printf("Enter %d elements : \n",n);
	int i;
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	} 
	printf("You entered : \n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}

	free(arr);
	arr = NULL;
 	for(i=0;i<n;i++){
 	printf("\n\n%d ",arr[i]);
 	}
	return  0;
}

