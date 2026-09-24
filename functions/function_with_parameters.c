#include<stdio.h>

void add(int a, int b){ // Function with parameters
	printf("Sum = %d\n",a+b);
}

int main(){
	int a,b;
	printf("Enter the values of a and b : ");
	scanf("%d%d",&a,&b);
	add(a,b); // Function call 
	return 0;
}
