#include<stdio.h>
#include<conio.h>

int main(){
	char password[20];
	int i = 0;
	char ch;
	
	printf("Enter the password : ");
	
	while((ch = getch()) != 13){    // 13 = Enter key 
	  if(ch == 8){    // 8 = Backspace
		 if(i>0){
	 		i--;             // Move index back
	 		printf("\b");   //Remove '*' from screen
	 }	
   }
	  else{
	  	password[i++] = ch;
	  	printf("*");
	  }
	}
    
    password[i] = '\0';
    
    printf("\nPassword Entered : %s",password);
    
    return 0;
}

