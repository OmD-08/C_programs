#include<stdio.h>

struct Address{
	char city[20];
	int pincode;
};

struct Student {
	int roll;
	char name[30];
	struct Address addr;   // Nested structure
};
int main(){
	
	struct Student s1;
	
	// Input data
	printf("Enter Roll No : ");
	scanf("%d",&s1.roll);
	
	printf("Enter Name : ");
	scanf("%s",&s1.name);
	
	printf("Enter City : ");
	scanf("%s",&s1.addr.city);
	
	printf("Enter Pincode : ");
	scanf("%d",&s1.addr.pincode);
	
	// Display data
	printf("\n---- Student Details ----\n");
	printf("Roll No : %d\n",s1.roll);
	printf("Name : %s\n",s1.name);
	printf("City : %s\n",s1.addr.city);
	printf("Pincode : %d\n",s1.addr.pincode);
	
	return 0;
}
