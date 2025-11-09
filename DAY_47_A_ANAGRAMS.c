Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count1[26] = {0};
    int count2[26] = {0};
    int len1, len2, i;
    int is_anagram = 1;

    printf("Enter the first string: \n");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: \n");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        is_anagram = 0;
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            if (str1[i] >= 'a' && str1[i] <= 'z')
            {
                count1[str1[i] - 'a']++;
            }
            if (str2[i] >= 'a' && str2[i] <= 'z')
            {
                count2[str2[i] - 'a']++;
            }
        }

        for (i = 0; i < 26; i++)
        {
            if (count1[i] != count2[i])
            {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram == 1)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not anagrams\n");
    }

    return 0;
}
