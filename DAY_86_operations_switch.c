//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} MenuChoice;

int main() {
    int num1, num2, result;
    MenuChoice choice;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nSelect an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", (int*)&choice); 

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result of addition: %d\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result of subtraction: %d\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result of multiplication: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
