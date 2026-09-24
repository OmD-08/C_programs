#include<stdio.h>
int even(int arr[],int size){  // For even
	int even_count = 0;
	int i;
	
	for(i = 0;i<size;i++){
	
	if(arr[i] % 2 == 0){
		even_count++;
	}
  }
  return even_count;
}

int odd(int arr[],int size){  // For odd
	int odd_count = 0;
	int i;
	
	for(i = 0;i<size;i++){
	
	if(arr[i] % 2 != 0){
		odd_count++;
	}
  }
  return odd_count;
}
int main(){
	int size,num[size],i;
	
	printf("Enter the number of elements you want : ");
	scanf("%d",&size);
	
	printf("Enter the numbers : ");
    for ( i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("You entered : ");
	for(i = 0;i < size;i++){
		printf(" %d ",num[i]);
	}
	printf("\n");
	
	int Even = even(num,size);
	int Odd = odd(num,size);
	
	printf("Total even numbers : %d\n",Even);
	printf("Total odd numbers : %d\n",Odd);
	
	return 0;
}
