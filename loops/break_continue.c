#include<stdio.h>
int main(){
	int i;
	
	for(i = 1; i <= 10;i++){
		if(i == 2)
	//	printf("Skipping 2 using continue.\n");
		continue;  // skip printing 5
		
		if (i == 8)
	//	printf("Breaking at %d.\n",i);
	    break; // stop the loop completely
	    
	    printf("%d\n",i);
	}
	
	
	return 0;
}
