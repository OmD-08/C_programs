#include<stdio.h>
int main(){
	int a = 10, b = 20;
	int marks = 45;
	char grade;
	int max = (a > b) ? a : b;  // Single Ternary Operators
	
	grade = (marks >= 90) ? 'A' :  // Nested Ternary Operator
	        (marks >= 75) ? 'B' :
	        (marks >= 50) ? 'c' : 'F';
	        
	        printf("\n\tmax = %d\n",max);
	        printf("\n-------------Nested Trenary Result------\n");
	        printf("\n\tGrade = %c\n",grade);
	
	
	
	return 0;
}
