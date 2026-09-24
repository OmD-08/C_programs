#include<stdio.h>
int main(){
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age>=18){
		if(age<=100){
			printf("You are eligible to vote\n");
		}
		else{
			printf("Invalid age please enter your correct age\n");
		}
	}
	if(age<18){
		printf("You are not eligible to vote\n");
		if(age<=0){
			printf("Invalid age please enter your correct age\n");
		}
	
		else{
		printf("Invalid age please enter your correct age\n");
        }
     } 
			
	return 0;
}
