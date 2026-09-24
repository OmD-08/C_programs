#include<stdio.h>

int sub(int a, int b){  // Function  with parameters
	return a - b;
}

int main(){
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d %d",&a,&b);
	int result = sub(a,b);   // Function call
	printf("Sub = %d",result);
	return 0;
	
}
