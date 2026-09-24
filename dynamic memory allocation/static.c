#include<stdio.h>

void sum(){
 	int a = 10;
 	a++;
 	
	static int b = 24;
	printf(" %d %d \n",a,b);
	b++;
}

int main(){
	int i;
	for(i=0;i<3;i++){
		sum(); 		// The static variables holds value between multiple function calls.
	}
	
	return 0;
}
