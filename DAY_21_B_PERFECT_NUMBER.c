//Write a program to check if a number is a perfect number.
//Perfect number → sum of proper divisors = number itself.


#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }
    if(sum == n)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");
    return 0;
}
