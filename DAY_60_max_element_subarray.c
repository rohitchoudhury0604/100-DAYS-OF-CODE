//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
#include <limits.h> 

void findMaxInSlidingWindow(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int currentMax = INT_MIN; 

        for (int j = 0; j < k; j++) {
            if (arr[i + j] > currentMax) {
                currentMax = arr[i + j];
            }
        }
        printf("%d ", currentMax); 
    }
    printf("\n"); 
}

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3; 

    printf("Maximum elements in each sliding window of size %d:\n", k);
    findMaxInSlidingWindow(arr, n, k);

    int arr2[] = {10, 20, 30, 50, 10, 70, 30};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;

    printf("Maximum elements in each sliding window of size %d:\n", k2);
    findMaxInSlidingWindow(arr2, n2, k2);

    return 0;

}
