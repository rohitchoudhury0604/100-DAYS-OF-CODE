// Write a program to swap the first and last digit of a number.


#include <stdio.h>
int main() 
{
    int n, first, last, temp, digits = 0, pow10 = 1;
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while(temp > 0) 
    {
        first = temp % 10;
        temp = temp / 10;
        digits++;
        if(temp > 0) pow10 = pow10 * 10;
    }
    if(digits == 1) 
    {
        printf("%d\n", n);
        return 0;
    }
    int middle = (n % pow10) / 10;
    int result = last * pow10 + middle * 10 + first;
    printf("%d\n", result);
    return 0;
}
