#include<stdio.h>
int main(){
	FILE *fp = fopen("report.txt","a");
	
	if(fp == NULL){
		printf("File not found!");
		return  0;
	}
	
	char text[100];
	printf("Enter text to append : ");
	gets(text);    // runtime string input
	
	fputs("\n",fp);
	fputs(text,fp);
	
	fclose(fp);
	printf("\nData appended successfully!");
	
	return 0;
}
