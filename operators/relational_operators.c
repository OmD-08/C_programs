#include<stdio.h>
int main(){
	int a,b;
	a = 10 , b = 20;
	int result1 = a == b;
	int result2 = a != b;
	int result3 = a > b;
	int result4 = a < b;
	int result5 = a >= b;
	int result6 = a <= b;
	
	printf("%d == %d : %d\n",a,b,result1);
	printf("%d != %d : %d\n",a,b,result2);
	printf("%d >  %d : %d\n",a,b,result3);
	printf("%d <  %d : %d\n",a,b,result4);
	printf("%d >= %d : %d\n",a,b,result5);
	printf("%d <= %d : %d\n",a,b,result6);
	
	return 0;
}
