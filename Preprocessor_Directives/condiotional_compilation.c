#include<stdio.h>
#define VERSION 2

int main(){
	
#if VERSION == 1
printf("BASIC VERSION ACTIVATED\n");
#elif VERSION == 2
printf("Pro Version Activated\n");
#else
printf("Unknown Version\n");
#endif

return 0;
}
