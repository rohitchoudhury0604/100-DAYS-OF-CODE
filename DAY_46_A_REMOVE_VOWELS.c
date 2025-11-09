Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;
    int j = 0;
    char ch;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[i] != '\0')
    {
        ch = tolower(str[i]);

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            str[j] = str[i];
            j++;
        }
        
        i++;
    }
    
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
