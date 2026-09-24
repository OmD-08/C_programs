#include<stdio.h>

union Data{
	int i;
	float f;
	char ch;
};

int main(){
	union Data d1;
	d1.i = 10;
	printf("d1.i = %d\n",d1.i);
	
	d1.f = 20.5;                   // here memory of int(4 byte) is taken by float(some memory from 4 btye) and some memory is left so it taken by char(1 byte)
	printf("d1.f = %.2f\n",d1.f);
	
	d1.ch = 'A';
	printf("d1.ch = %c\n",d1.ch);
	
	// Printing all again
	printf("After storing char :\n");
	printf("d1.i = %d\n",d1.i);
	printf("d1.f = %.2f\n",d1.f);
	printf("d1.ch = %c\n",d1.ch);
	
	return 0;
}
