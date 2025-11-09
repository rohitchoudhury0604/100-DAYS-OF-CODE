Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int char_counts[26] = {0};
    int i = 0;
    char first_repeating = '\0';

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[i] != '\0')
    {
        char ch = str[i];
        
        if (ch >= 'a' && ch <= 'z')
        {
            int index = ch - 'a';
            char_counts[index]++;
            
            if (char_counts[index] > 1)
            {
                first_repeating = ch;
                break;
            }
        }
        i++;
    }

    if (first_repeating != '\0')
    {
        printf("%c\n", first_repeating);
    }
    else
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
