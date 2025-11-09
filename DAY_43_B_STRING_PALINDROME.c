Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len = 0;
    int i;
    int is_palindrome = 1;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}
