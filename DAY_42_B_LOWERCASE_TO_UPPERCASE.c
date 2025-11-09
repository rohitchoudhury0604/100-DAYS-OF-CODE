Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
