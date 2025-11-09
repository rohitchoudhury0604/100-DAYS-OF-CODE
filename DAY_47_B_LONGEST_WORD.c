Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char longest_word[100] = {0};
    char current_word[100];
    int i = 0, j = 0;
    int max_len = 0;
    int current_len = 0;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            current_word[j] = str[i];
            j++;
        }
        else
        {
            current_word[j] = '\0';
            current_len = j;

            if (current_len > max_len)
            {
                max_len = current_len;
                strcpy(longest_word, current_word);
            }
            j = 0;
        }
    }

    current_word[j] = '\0';
    current_len = j;
    if (current_len > max_len)
    {
        max_len = current_len;
        strcpy(longest_word, current_word);
    }

    printf("%s\n", longest_word);

    return 0;
}
