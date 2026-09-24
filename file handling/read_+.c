#include<stdio.h>

int main(){
	FILE *fp = fopen("report.txt","r+"); // open existing file
	
	if(fp == NULL){
		printf("FILE not found !");
		return 0;
	}
	
	int a;
	fscanf(fp,"First number = %d",&a); // read value
	printf("Old Value : %d\n",a);
	
	printf("Enter new value to update in file :");
	scanf("%d",&a);
	
	rewind(fp);     // move pointer to begining to overwrite
	fprintf(fp,"First number = %d",a);  // update number in file
	printf("Updated successfully !\n");
	
	rewind(fp);  // move again to start for printing
	fscanf(fp,"First number = %d",&a);
	printf("New Value in file ? %d\n",a);
	
	fclose(fp);
	return 0;
	
}
