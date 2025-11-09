Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;
    int len = 0;
    int last_space_index = -1;

    printf("Enter a name: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            last_space_index = i;
        }
    }

    if (last_space_index == -1)
    {
        printf("%s\n", str);
    }
    else
    {
        if (isalpha(str[0]))
        {
            printf("%c.", toupper(str[0]));
        }

        for (i = 1; i < last_space_index; i++)
        {
            if (isspace(str[i]) && isalpha(str[i + 1]))
            {
                printf("%c.", toupper(str[i + 1]));
            }
        }
        
        printf(" %s\n", &str[last_space_index + 1]);
    }

    return 0;
}
