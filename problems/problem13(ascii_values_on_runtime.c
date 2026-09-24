#include<stdio.h>
#include<conio.h>
int main(){
	char ch;                     // char into ascii
	printf("Press any key :");
	ch = getch();
	
	printf("\nCharacter = %c",ch);
	printf("\nASCII Value = %d",ch);
	
	char ascii;                 // ascii into char
	printf("Enter the ascii value :");
	ch = getch();
	
	printf("\nCharacter = %d",ch);
	printf("\nASCII Value = %c\n",ch);
	
	return 0;
}
