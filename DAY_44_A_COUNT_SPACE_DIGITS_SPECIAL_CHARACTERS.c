Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;
    int spaces = 0;
    int digits = 0;
    int special = 0;
    char ch;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[i] != '\0')
    {
        ch = str[i];

        if (isspace(ch))
        {
            spaces++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (!isalpha(ch))
        {
            special++;
        }
        
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
