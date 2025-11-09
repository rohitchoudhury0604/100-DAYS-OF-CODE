Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int n, i, key;
    int arr[100];
    int low, high, mid;
    int index = -1;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d sorted elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: \n");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (index != -1)
    {
        printf("Found at index %d\n", index);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
