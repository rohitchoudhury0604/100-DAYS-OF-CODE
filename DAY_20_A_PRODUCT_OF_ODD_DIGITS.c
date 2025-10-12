//Write a program to find the product of odd digits of a number.


#include <stdio.h>
int main() 
{
    int n, digit, product = 1, found = 0;
    scanf("%d", &n);
    while(n > 0) 
    {
        digit = n % 10;
        if(digit % 2 == 1) 
        {  
            product = product * digit;
            found = 1;
        }
        n = n / 10;
    }
    if(found)
        printf("%d\n", product);
    else
        printf("1\n");  
    return 0;
}
