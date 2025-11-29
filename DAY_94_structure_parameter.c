//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#include <string.h> 

struct Person {
    char name[50];
    int age;
};

void printPersonDetails(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    
    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;

    printf("Details of Person 1:\n");
    printPersonDetails(person1);

    struct Person person2;
    strcpy(person2.name, "Bob");
    person2.age = 25;

    printf("\nDetails of Person 2:\n");
    printPersonDetails(person2);

    return 0;
}
