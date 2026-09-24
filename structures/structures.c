#include<stdio.h>
#include<string.h>

struct Student{
	int roll;
	char name[50];
	float marks;
} s1;

int main(){
	s1.roll = 101;  // assign integer
	strcpy(s1.name,"Aryan");   // assign string
	s1.marks = 89.5;   // assing float
	
	printf("Student Roll no : %d\n",s1.roll);
	printf("Student name : %s\n",s1.name);
	printf("Student Marks : %d\n",s1.marks);
	
	return 0;
}
