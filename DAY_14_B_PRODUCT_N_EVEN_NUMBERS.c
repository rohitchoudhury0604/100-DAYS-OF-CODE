//Write a program to print the product of the first n even numbers.


#include <stdio.h>

int main() 
{
    int n, i;
    int product = 1;
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2) 
    {
        product = product * i;
    }

    printf("%d\n", product);
    return 0;
}
