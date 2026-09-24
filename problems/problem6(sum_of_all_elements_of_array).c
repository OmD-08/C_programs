// To find the sum of all  numbers in an array 
#include<stdio.h>

int sum(int arr[],int size){
	int i,total = 0;	
	
	for(i=0;i<size;i++){
		 total +=  arr[i];
		}
	
		return total;
	}

int main(){
	
    int size,i;

printf("~~~~~~~~~~ Welcome to the SUM CALCULATOR ~~~~~~~~~~\n");

    printf("     Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    printf("         Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
    
        scanf("%d", &numbers[i]); 
    }

    printf("\n       You entered: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
	
	int Sum = sum(numbers,size);
	printf("	The sum = %d\n",Sum);
	
	return 0;
}
