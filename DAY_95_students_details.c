//Return a structure containing top student's details from a function.
    #include <stdio.h>
    #include <string.h> 

    struct Student {
        char name[50];
        int roll_number;
        float marks;
    };
       struct Student findTopStudent(struct Student students[], int num_students) {
        struct Student top_student;
        if (num_students == 0) {
            strcpy(top_student.name, "N/A");
            top_student.roll_number = -1;
            top_student.marks = -1.0;
            return top_student;
        }

        top_student = students[0]; 

        for (int i = 1; i < num_students; i++) {
            if (students[i].marks > top_student.marks) {
                top_student = students[i];
            }
        }
        return top_student;
    } 
        int main() {
        struct Student class_students[3];

        strcpy(class_students[0].name, "Alice");
        class_students[0].roll_number = 101;
        class_students[0].marks = 85.5;

        strcpy(class_students[1].name, "Bob");
        class_students[1].roll_number = 102;
        class_students[1].marks = 92.0;

        strcpy(class_students[2].name, "Charlie");
        class_students[2].roll_number = 103;
        class_students[2].marks = 78.0;

        struct Student top_performer = findTopStudent(class_students, 3);

        printf("Top Student Details:\n");
        printf("Name: %s\n", top_performer.name);
        printf("Roll Number: %d\n", top_performer.roll_number);
        printf("Marks: %.2f\n", top_performer.marks);

        return 0;
    }
