//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter Name: ");
        scanf(" %49[^\n]", students[i].name); 
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
