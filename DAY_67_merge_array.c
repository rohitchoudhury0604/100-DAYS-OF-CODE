//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int m, n;

    printf("Enter the size of the first array (m): ");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(m * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }

    printf("Enter the elements of the first sorted array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array (n): ");
    scanf("%d", &n);

    int *arr2 = (int *)malloc(n * sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        free(arr1); 
        return 1;
    }

    printf("Enter the elements of the second sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int *mergedArr = (int *)malloc((m + n) * sizeof(int));
    if (mergedArr == NULL) {
        printf("Memory allocation failed for mergedArr.\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    int i = 0; 
    int j = 0; 
    int k = 0; 

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < m) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (int idx = 0; idx < (m + n); idx++) {
        printf("%d ", mergedArr[idx]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(mergedArr);

    return 0;
}
