#include <stdio.h>
#include <string.h> // Required for strcpy()

struct Student {
    int roll;
    char name[30];
    float marks;
};

// Function declaration
void display(struct Student *s);

int main() {
    struct Student s1 = {4, "Aryan", 89.5}; 
    
    // Passing the address of the structure
    display(&s1); 
    
    return 0;
}

// Function definition
void display(struct Student *s) {
   	//wrong : s->name = "om"
    // CORRECT: Use strcpy to copy a string into a character array
    strcpy(s->name, "Om"); 
    s->roll = 102;
    
    printf("\n--- Students Details ---\n");
    printf("Roll No : %d\n", s->roll);
    printf("Name    : %s\n", s->name);
    printf("Marks   : %.2f\n", s->marks);
}

