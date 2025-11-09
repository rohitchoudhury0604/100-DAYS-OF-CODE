Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int arr[100];
    int max1, max2;

    max1 = INT_MIN;
    max2 = INT_MIN;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    printf("%d\n", max2);

    return 0;
}
