Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main()
{
    int n, i, pos, key;
    int arr[100];

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0-based) and element to insert: \n");
    scanf("%d %d", &pos, &key);

    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    
    arr[pos] = key;
    n++;

    printf("Array after insertion: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
