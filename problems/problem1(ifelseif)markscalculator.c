#include<stdio.h>
int main(){
	int marks;
	printf("---------Welcome to result calculator---------\n");
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks>=95){
		printf("You scored : A");
	}
	else if(marks>=75){
		printf("You scored : B");
	}
	else if(marks>=60){
		printf("You scored : C");
	}
	else if(marks>=45){
		printf("You scored : D");
	}
	else if(marks>100 || marks<0){
		printf("Invalid marks please try again");
	}
	else{
		printf("You are failed");
	}
		
	
	
		
	return 0;
}
