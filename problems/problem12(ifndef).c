#include<stdio.h>
#define VERSION n
int main(){
	
	printf("Enter your device verson : ");
	scanf("%d",&n);
	
#if VERSION == 1
printf("You have old version!\n The update is availabe!");
#elif VERSION == 2
printf("Your version is upto date!\n No update availabe \n");
#else
printf("Unknown Version\n");
#endif

	return 0;
}
