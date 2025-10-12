// Write a program to find the LCM of two numbers.
// LCM (Least Common Multiple) = smallest number divisible by both.


#include <stdio.h>
int main()
{
    int a, b, lcm;
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d\n", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
