Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, i, j, k;
    int first_flag = 1;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (first_flag == 1)
            {
                first_flag = 0;
            }
            else
            {
                printf(",");
            }
            
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}
