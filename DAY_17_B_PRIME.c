// Write a program to check if a number is prime.

#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    scanf("%d", &n);
    if (n <= 1)
    {
        flag = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
