// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
// Name: Vatsal Agarwal
// SAP ID: 590023223

#include <stdio.h>
int main() 
{
    int n, i;
    float sum = 0.0;
    scanf("%d", &n);
    int num = 2, den = 3;
    for(i = 1; i <= n; i++) 
    {
        sum = sum + (float)num / den;
        num = num + 2;
        den = den + 4;
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
