#include<stdio.h>
#include<string.h>
int copy(char str1[],char str2[]){
	int i = 0;
	while(str2[i] != '\0'){
	
	 str1[i] = str2[i];
	 i++;
	 
  }
     str1[i] = '\0';
	 printf("\nFirst word = %s\n",str1);
	 printf("Second word = %s\n",str2);
	 
	 return 0;
}

int combine(char str1[],char str2[]){
	int i = 0;
	int j = 0;
	printf("Combine word : ");
	
	while(str1[i] != '\0'){
	
	printf("%s",str1);
	i++;
	str1[i] = '\0';
  }
    
   
    while(str2[j] != '\0'){
    	printf("%s",str2);
	j++;
	str2[j] = '\0';
	}

	return 0;
}

int length(char str1[],char str2[]){
	int i = 0;
	int counter1 = 0;
	
    while(str1[i] != '\0'){
    	counter1++;
    	i++;
	}
  
	int j = 0;
	int counter2 = 0;
	
	while(str2[j] != '\0'){
		
		counter2++;
		j++;
	}
	
	printf("The length of 1st word is : %d \n",counter1);
	printf("The length of 2nd word is : %d \n",counter2);
	return 0;
}

int main(){
	
	char str1[10]; 
	char str2[10]; 

	printf("Enter the  1st word :");
	gets(str1);
	
	printf("\nEnter the 2nd word :");
	gets(str2);
	
	int a;
	printf("What do you want to  do? :\n1 - copy\n2 - Combine\n3 - length \n");
	scanf("%d",&a);
	
	switch(a){
	case 1:	
	 copy(str1,str2);
	break;
	case 2:
	 combine(str1,str2);
	break; 	
	case 3:
	 length(str1,str2);
	 break;
  }
	return 0;
}
	
