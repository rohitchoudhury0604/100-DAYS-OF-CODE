//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h> 

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1 = {"Alice", 30, 1.65};

    struct Person *personPtr;

    personPtr = &person1;

    printf("Original Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);

    strcpy(personPtr->name, "Bob"); 
    personPtr->age = 25;
    personPtr->height = 1.80;

    printf("\nModified Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);

    return 0;
}
