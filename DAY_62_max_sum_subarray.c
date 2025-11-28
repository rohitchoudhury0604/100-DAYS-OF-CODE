//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
#include <limits.h> 

int maxSubArraySum(int arr[], int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;  
    int max_negative_element = INT_MIN; 
    int all_negative = 1; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_negative_element && arr[i] < 0) {
            max_negative_element = arr[i];
        }

        if (arr[i] >= 0) {
            all_negative = 0;
        }

        max_ending_here = max_ending_here + arr[i];

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }

    if (all_negative) {
        return max_negative_element;
    }

    return max_so_far;
}

int main() {
    int arr1[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Maximum contiguous sum for arr1: %d\n", maxSubArraySum(arr1, n1));

    int arr2[] = {-1, -2, -3, -4, -5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Maximum contiguous sum for arr2: %d\n", maxSubArraySum(arr2, n2));

    int arr3[] = {1, 2, 3, -10, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Maximum contiguous sum for arr3: %d\n", maxSubArraySum(arr3, n3));

    return 0;
}
