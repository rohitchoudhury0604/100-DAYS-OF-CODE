//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;  
    float marks;   
};

int main() {
    struct Student s1;

    printf("Enter student details:\n");

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    for (int i = 0; s1.name[i] != '\0'; i++) {
        if (s1.name[i] == '\n') {
            s1.name[i] = '\0';
            break;
        }
    }

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    getchar(); 

    printf("\nDisplaying Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks); 

    return 0;
}
