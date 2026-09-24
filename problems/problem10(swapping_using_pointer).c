#include<stdio.h>
int swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	return 0;
}

int main(){
	int a;
	printf("Enter the value of  a : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter the value of  b : ");
	scanf("%d",&b);
	
	printf("The value of a before swapping = %d\n",a);
	printf("The value of b before swapping = %d\n\n",b);
	
	
	swap(&a,&b);
	
	printf("Now the value of a = %d\n",a);
	printf("Now the value of b = %d\n",b);
	
	return 0;
	
}
