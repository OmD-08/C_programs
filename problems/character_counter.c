#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	int count = 0;
	
	printf("Enter the word :");
	ch = getche();
	
	while((ch = getche()) != 13){
		count++;
	}
	
	printf("\nTotal Characters = %d",count);
	
	return 0;
}
