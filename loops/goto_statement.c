#include<stdio.h>
int main(){
	int i = 1;
	
	start: //label
	printf("%d\n",i);
	i++;
	if (i<=5){
		goto start; // jump back to label
	}
	
	return 0;
}
