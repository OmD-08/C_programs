#include<stdio.h>
struct Student{
	int roll;
	char name[30];
	float marks;
};

// Function decleration
void display(struct Student s);

int main(){
	struct Student s1 = {101,"Aryan",89.5};
	
	display(s1); // pass structure by value 
	return 0;
}

//Function definition
void display(struct Student s){
	printf("\n--- Students Details ---\n");
	printf("Roll No : %d\n",s.roll);
	printf("Name : %s\n",s.name);
	printf("Marks : %.2f\n",s.marks);
	
}
