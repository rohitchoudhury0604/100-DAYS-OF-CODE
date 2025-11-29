//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int num_students, i;

    fp = fopen("students.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name); 
        printf("Roll Number: ");
        scanf("%d", &s.roll_number);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll_number, s.marks);
    }

    fclose(fp); 
    printf("\nStudent records saved to students.txt successfully.\n");

    fp = fopen("students.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Displaying Student Records from File ---\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll_number, &s.marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", s.name, s.roll_number, s.marks);
    }

    fclose(fp); 

    return 0;
}
