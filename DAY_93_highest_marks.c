//Find and print the student with the highest marks.
#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a structure to store student information
struct Student {
    char name[50];
    int marks;
};

int main() {
    int numStudents;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of Student structures
    struct Student students[numStudents];

    // Input data for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        // Clear the input buffer before reading string
        while (getchar() != '\n'); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove the trailing newline character if present
        students[i].name[strcspn(students[i].name, "\n")] = 0; 
        
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Find the student with the highest marks
    int highestMarks = -1;
    int topperIndex = -1;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }

    // Print the details of the topper student
    if (topperIndex != -1) {
        printf("\nStudent with the highest marks:\n");
        printf("Name: %s\n", students[topperIndex].name);
        printf("Marks: %d\n", students[topperIndex].marks);
    } else {
        printf("\nNo student data entered.\n");
    }

    return 0;
}
