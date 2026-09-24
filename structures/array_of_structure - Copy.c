#include<stdio.h>

struct Student{
	int roll;
	char name[30];
	float marks;
};

int main(){
	struct Student s[3]; // Array of 3 students
	int i;
	
	//  Input student data
	for(i=0;i<3;i++){
		printf("\nEnter the details for student %d :\n",i+1);
		printf(" Roll no : ");
		scanf("%d",&s[i].roll);
		
		printf("Name : ");
		gets(s,&s[i].name);
		
		printf("Marks : ");
		scanf("%f",&s[i].marks);
		
	}
	
	//Display all  student data
	printf("\n--- Student Details ----\n");
	for(i=0;i<3;i++){
	
	printf("Roll : %d\t Name : %s\t Marks : %.2f\n",s[i].roll,s[i].name,s[i].marks);
	}
	
	return 0;
}
