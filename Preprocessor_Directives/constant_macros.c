#include<stdio.h>
#define PI 3.14159                // constant Macro 
#define AREA(r) (PI * (r) * (r))  // Macro with Expression
#define MAX(a,b) ((a > b) ? a : b)  // Macros with Arguments (Mini Functions)

int main(){
	printf("Value of PI = %.5f\n",PI);
	printf("Area = %.2f\n",AREA(5));
	printf("Max = %d",MAX(10,20));
	
	return 0;
}
