#include<stdio.h>

#define LIMIT 100
#undef LIMIT   			// remove it
#define LIMIT 200		//redefine

int main(){

	printf("LIMIT = %d",LIMIT);
	
	return 0;
}
