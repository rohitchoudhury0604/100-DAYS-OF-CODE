//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceilIndex = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == x) {
            ceilIndex = mid;
            high = mid - 1; 
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else { 
            ceilIndex = mid;
            high = mid - 1;
        }
    }
    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the integer x to find its ceil: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index == -1) {
        printf("Ceil of %d does not exist in the array.\n", x);
    } else {
        printf("The ceil of %d is %d at index %d.\n", x, arr[index], index);
    }

    return 0;
}
