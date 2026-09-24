#include<stdio.h>

int main(){
	FILE *file = fopen("message.txt","w");
	
		if(file == NULL){
			printf("Error opening file!");
			return 0;
		}
		
		char msg[50];
		printf("Enter a short message : ");
		gets(msg);
		
		fputs("--- Message Saved Successfully ----\n",file);
		fputs(msg,file);
		
		fclose(file);
		printf("Message written using fputs()");
		
		return 0;
}
