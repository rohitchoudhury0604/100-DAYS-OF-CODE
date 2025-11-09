Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len = 0;
    int i;
    char temp;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("%s\n", str);

    return 0;
}
