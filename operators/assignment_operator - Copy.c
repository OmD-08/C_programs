#include<stdio.h>
int main(){
	int a,b;
	
	a = 5;
	b = 10;
	
	printf("\ta = %d\n",a);
	printf("\tb = %d\n",b);
	
	a += 4;     // a = a + 4
	b -= 6;    // b = b - 6
	a *= 2;   // a = a * 2

	b += a; 
	
	printf("\tThe value of a: %d\n",a);
	printf("\tThe value of b: %d\n",b);	
	
	return 0 ;
}
