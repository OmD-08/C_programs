#include<stdio.h>
void MaxMin(int arr[],int size,int *max,int *min){
	int i;
	*max = *min = arr[0];
	for(i=1;i<size;i++){
		if(*min > arr[i]){
			*min = arr[i];
		}
		
		if(*max < arr[i]){
			*max = arr[i];
		}
	}		
}

int main(){
	int size;
	printf("Enter how many numbers you want to  enter : ");
	scanf("%d",&size);
	
	int num[size],i;
	printf("\nEnter the numbers : ");
	for(i=0;i<size;i++){
		scanf("%d",&num[i]);
	}
	
	printf("\nYou entred : ");
	for(i=0;i<size;i++){
		printf(" %d ",num[i]);	
	}
	printf("\n");
	
	int max,min;
	MaxMin(num,size,&max,&min);
	
	printf("The maxmimum number : %d \n",max);
	printf("The minimum  number : %d \n",min);
	
	return 0;
}
