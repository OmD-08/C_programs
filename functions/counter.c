#include<stdio.h>
int counter(int a){
	int count = 0;
	
	int limit;
	printf("Enter how many times it should count : ");
	scanf("%d",&limit);
	
 while(count<=limit){
		printf("Counter : %d \n",count);
		count++;
	}
	return count;
}
int main(){
	
	int a;
	a = counter(a);
	return 0;
}
