#include<stdio.h>

int main(){
	FILE *fp = fopen("report.txt","w");
	if(fp == NULL){
		printf("File not created!");
		return 0;
	}
	
	int a,b,c;
	printf("Enter the numbers to store their sum : ");
	scanf("%d %d ",&a,&b);
	c = a + b;
	fprintf(fp,"First number = %d\n",a);
	fprintf(fp,"Second number = %d\n",b);
	fprintf(fp,"First number = %d\n",c);
	
	fclose(fp);
	printf("Data written using fprintf()");
	
	return 0;
	
}
