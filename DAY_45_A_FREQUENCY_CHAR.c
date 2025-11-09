Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch_to_find;
    int i = 0;
    int count = 0;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter the character to find: \n");
    scanf("%c", &ch_to_find);

    while (str[i] != '\0')
    {
        if (str[i] == ch_to_find)
        {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
