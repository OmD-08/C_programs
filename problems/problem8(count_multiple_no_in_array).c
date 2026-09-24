#include<stdio.h>
int duplicate(int arr[],int size){
	int i,j,counter;
	
	printf("Duplicate numbers : ");
	 for(i=0;i<size;i++) {
        for(j=i+1;j<size;j++) {
            
            if(arr[i] == arr[j]) {
                printf("%d ", arr[j]);
                counter++;
                break; 
            }
        }
    }
    printf("\n");
    printf("It is repeated %d times",counter);
    return 0;
}

int main(){
	int size,i;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&size);
	
	int num[size];
	printf("Enter the numbers : ");
	for(i=0;i<size;i++){
		scanf("%d",&num[i]);
	}
	
	printf("\nYou entered : ");
	for(i=0;i<size;i++){
		printf(" %d ",num[i]);
	}
	printf("\n");
	
	int a = duplicate(num,size);
	
	
	return 0;
}
