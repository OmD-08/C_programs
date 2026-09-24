#include<stdio.h>
#include<math.h>
#define _MATH_H
#ifndef _MATH_H
#error First include then compile
#else
void main(){
	
	float a;
	a = sqrt(7);
	printf("%f",a);
}
#endif
