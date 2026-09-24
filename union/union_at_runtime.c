#include<stdio.h>

union Student{
	int roll;
	float marks;
	char name[20];
};

int main(){
	union Student s;
	
	printf("Enter Roll :");
	scanf("%d",&s.roll);
	printf("Roll : %d\n",s.roll);
	
	printf("Enter Marks :");
	scanf("%f",&s.marks);
	printf("Marks : %f\n",s.marks);
	
	printf("Enter Name :");
	scanf("%s",&s.name);
	printf("Name : %s\n",s.name);
	
	printf("------ Printing again : ------\n");
	printf("Roll : %d\n",s.roll);
	printf("Marks : %f\n",s.marks);
	printf("Name : %s\n",s.name);
	
	return 0;
}
