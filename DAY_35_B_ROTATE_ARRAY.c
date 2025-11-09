Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main()
{
    int n, k, i;
    int arr[100];
    int temp[100];
    int new_pos;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: \n");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++)
    {
        new_pos = (i + k) % n;
        temp[new_pos] = arr[i];
    }

    printf("Array after rotation: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
