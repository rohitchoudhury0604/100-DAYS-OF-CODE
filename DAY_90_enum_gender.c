//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1;
    strcpy(p1.name, "Alice");
    p1.age = 30;
    p1.gender = FEMALE;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    
    printf("Gender: ");
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}
