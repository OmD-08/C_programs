#include<stdio.h>
#include<string.h>

int main(){
	char str1[50] = "Hello";
	char str2[50] = "World";
	char str3[50];
	
	printf("=== STRING FUNCTIONS IN C ===\n\n");
	
	// strlen() - Finds the length of a string
	printf(" Length of str1 ('%s') = %d\n",str1,strlen(str1));
	
	// strlcpy() - Copies one string into another
	strcpy(str3,str1);
	printf("strcpy(): After copying, str3 = %s\n",str3);
	
	// strcat() - Concatenates (combine) two strings
	strcat(str1,str2);
	printf("strcat(): After concatenation,str1 = %s \n\n",str1);
	
	char st1[] = "Hello";
	char st2[] = "hello";
	char st3[] = "Hi";
	int cmp1 = strcmp(st1,st2);
	int cmp2 = strcmp(st1,st3);
	
	// Compare st1 and st2
	  if (cmp1 == 0){
	  	printf("Result = %d\t Both are Equal\n",cmp1);
	  	
	  } 
	else if(cmp1 > 0){
		printf("Result = %d\t String '%s' is Greater than 's'\n",cmp1,st1,st2);
		
	}
	else {
		printf("Result = %d\t Both are Equal\n",cmp1,st1,st2);
		
	}
	
	// Compare st1 and st3
	 if (cmp2 == 0){
	  	printf("Result = %d\t Both are Equal\n",cmp2);
	  	
	  } 
	else if(cmp2 > 0){
		printf("Result = %d\t String '%s' is Greater than 's'\n",cmp2,st1,st3);
		
	}
	else {
		printf("Result = %d\t String '%s'is Smaller than '%s'",cmp2,st1,st3);
		
	}
	
	char str[20];
	printf("\nEnter the String : ");
	gets(str);
	printf("%s\n",str);
	printf("Lower Case string : %s\n",strlwr(str));  // strlwr() use to convert the string in Lower case 
	printf("Upper Case string : %s\n",strupr(str));  // strupr() use to convert the string in Upper  case 
	printf("Reverse of string : %s\n",strrev(str));  // strrev() use to reverse  the string 
	
	
	return 0;
}
