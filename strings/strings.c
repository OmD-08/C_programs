#include<stdio.h>
int main(){
	char a[] = "Hi";   // compiler sets size 3 ( 2 chars + '\0' )
	char b[] = "Hello";  // reserved space for 10 chars
	char c[10] = {'W','o','r','l','d','\0','m'};   // manual initilin
	 printf("c[0] = %c\n",c[0]);
	 printf("%s %s %s\n",a,b,c);
	 printf("%s\n",a);
	 printf("%s\n",c);
	printf("size of a = %d\n",sizeof(a));
	
	// reading a single word with scanf
	char name[20];
	printf("Enter your first name : ");
	scanf("%19s",&name);  // limit to avoid overflow
	printf("Hello %s\n",name);
		
	return 0;
}
