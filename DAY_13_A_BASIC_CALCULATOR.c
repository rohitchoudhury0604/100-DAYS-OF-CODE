//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() 
{
    int a, b, result;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch(op) {
        case '+': result = a + b; printf("%d\n", result); break;
        case '-': result = a - b; printf("%d\n", result); break;
        case '*': result = a * b; printf("%d\n", result); break;
        case '/': 
            if(b != 0)
                printf("%d\n", a / b);
            else
                printf("Division by zero error\n");
            break;
        case '%': 
            if(b != 0)
                printf("%d\n", a % b);
            else
                printf("Modulo by zero error\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
