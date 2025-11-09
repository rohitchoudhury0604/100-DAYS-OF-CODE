Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char temp[200];
    int len1, len2;

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
        printf("Not rotation\n");
    }
    else
    {
        strcpy(temp, str1);
        strcat(temp, str1);

        if (strstr(temp, str2) != NULL)
        {
            printf("Rotation\n");
        }
        else
        {
            printf("Not rotation\n");
        }
    }

    return 0;
}
