Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h
#include <string.h>

int main()
{
    char str[100];
    int len, start, end, i, j;
    char temp;

    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);
    start = 0;

    for (end = 0; end <= len; end++)
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            i = start;
            j = end - 1;
            
            while (i < j)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }
            start = end + 1;
        }
    }

    printf("%s\n", str);

    return 0;
}
