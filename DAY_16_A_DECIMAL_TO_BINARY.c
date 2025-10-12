// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main()
{
    int n, bin = 0, place = 1, rem;
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        bin = bin + rem * place; // build binary in decimal form
        place = place * 10;
        n = n / 2;
    }
    printf("%d\n", bin);
    return 0;
}
