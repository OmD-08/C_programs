#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	int result_1 =  (a > b) && (b < a);   // AND (&&) Logical operator
	int result_2 =  (a < b) || (a > b);  // OR (||)  Logical operator
	int result_3 =  !(a < b);           // NOT (!)  Logical operator
	
	printf("  (%d > %d) && (%d < %d): %d\n",a,b,b,a,result_1);
	printf("  (%d < %d) || (%d > %d): %d\n",a,b,a,b,result_2);
	printf("  !(%d < %d): %d\n",a,b,result_3);
	
	return 0 ;
}
