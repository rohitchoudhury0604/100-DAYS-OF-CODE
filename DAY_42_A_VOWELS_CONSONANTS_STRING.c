Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0;
    int consonants = 0;
    char ch;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[i] != '\0')
    {
        ch = str[i];

        if (isalpha(ch))
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
