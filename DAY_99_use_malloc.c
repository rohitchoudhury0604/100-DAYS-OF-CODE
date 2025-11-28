//Use malloc() to allocate structure memory dynamically and print details
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student *sPtr;

    sPtr = (struct Student *)malloc(sizeof(struct Student));

    if (sPtr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; 
    }

    strcpy(sPtr->name, "Alice Smith");
    sPtr->rollNumber = 101;
    sPtr->marks = 85.5;

    printf("Student Details:\n");
    printf("Name: %s\n", sPtr->name);
    printf("Roll Number: %d\n", sPtr->rollNumber);
    printf("Marks: %.2f\n", sPtr->marks);

    free(sPtr);
    sPtr = NULL; 

    return 0; 
}
