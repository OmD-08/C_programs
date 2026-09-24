#include<stdio.h>
int main(){
	FILE *fp = fopen("message.txt","a+");
		if(fp == NULL){
		printf("FILE not found !");
		return 0;
	}
	char msg[100];
	printf("Enter text to append : ");
	gets(msg);
	
	fputs("\n",fp);
	fputs(msg,fp);
	
	printf("\nData appended successfully!");
	
	rewind(fp);   
    
    printf("\nReading the file we just wrote :\n");
    
    while(fgets(msg,sizeof(msg),fp)){
    	printf("%s",msg);
	}
	fclose(fp);
	return 0;
	
}
