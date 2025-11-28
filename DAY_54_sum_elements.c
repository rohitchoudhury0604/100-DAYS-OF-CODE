//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate (n^2 + n) / 2
    double value_to_sqrt = (double)n * (n + 1) / 2;

    // Calculate the square root
    double x_double = sqrt(value_to_sqrt);

    // Check if x_double is an integer
    int x_int = (int)x_double;
    if (x_double == x_int) {
        printf("The pivot integer is: %d\n", x_int);
    } else {
        printf("-1\n");
    }

    return 0;
}
