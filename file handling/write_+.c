#include<stdio.h>
int main(){
	FILE *fp = fopen("write.txt","w+");
	
	if(fp == NULL){
		printf("File not found!");
		return  0;
	}
	
	int n;
	printf("Enter a number to write in file : ");
    scanf("%d",&n);
    
    fprintf(fp,"Stored Number = %d\n",n);
    
    rewind(fp);    // move to start for  read
    
    printf("\nReading the file we just wrote :\n");
    
    char line[50];
    while(fgets(line,sizeof(line),fp)){
    	printf("%s",line);
	}
	fclose(fp);
	return 0;
}

