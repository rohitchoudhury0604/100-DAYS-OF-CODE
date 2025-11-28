//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#include <limits.h>
int maxSubarraySumK(int arr[], int n, int k) {
    if (n < k || k <= 0) {
        printf("Invalid input: Array size must be greater than or equal to k, and k must be positive.\n");
        return INT_MIN; 
    }

    int current_sum = 0;
    int max_sum = INT_MIN; 

    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    max_sum = current_sum; 

    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = maxSubarraySumK(arr, n, k);

    if (result != INT_MIN) { 
        printf("The maximum sum of a subarray of size %d is: %d\n", k, result);
    }

    int arr2[] = {5, 2, -1, 0, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    result = maxSubarraySumK(arr2, n2, k2);
    if (result != INT_MIN) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k2, result);
    }

    return 0;

}
