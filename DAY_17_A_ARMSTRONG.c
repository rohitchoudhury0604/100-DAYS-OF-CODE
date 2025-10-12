
// Write a program to check if a number is an Armstrong number.
// Armstrong number → sum of cubes of digits = number itself.


#include <stdio.h>
int main()
{
    int n, sum = 0, temp, digit;
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if (temp == sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
