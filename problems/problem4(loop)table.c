#include<stdio.h>
int main(){
	int a,i,b;
	
	printf("----------Welcome----------\n");
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("----------Table :----------\n");

	for(i=1;i<=10;i++){
		
		b = a * i;
		printf(" %d * %d = %d \n",a,i,b);
	}
	
	return 0;
}
