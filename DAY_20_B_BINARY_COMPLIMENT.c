//Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>
int main() 
{
    int n, digit, place = 1, result = 0;
    scanf("%d", &n);
    while(n > 0) 
    {
        digit = n % 10;
        if(digit == 0)
            result = result + 1 * place;
   place = place * 10;
        n = n / 10;
    }
    printf("%d\n", result);
    return 0;
}
