#include<stdio.h>
int main(){
	FILE *fp = fopen("message.txt","r");
	
	if(fp == NULL){
		printf("File not found!");
		return 0;
	}
	
	char line[100];
	printf("--- File Content using fgets() ---\n\n");
	
	while(fgets(line,sizeof(line),fp) != NULL){
		printf("%s",line);       // prints full sentences with spaces
	}
	fclose(fp);
	return 0;
}
