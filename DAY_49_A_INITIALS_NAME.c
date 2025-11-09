Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a name: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    if (isalpha(str[0]))
    {
        printf("%c.", toupper(str[0]));
    }

    while (str[i] != '\0')
    {
        if (isspace(str[i]) && isalpha(str[i + 1]))
        {
            printf("%c.", toupper(str[i + 1]));
        }
        i++;
    }
    
    printf("\n");

    return 0;
}
