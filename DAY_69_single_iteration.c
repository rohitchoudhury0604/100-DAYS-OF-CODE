//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#include <stdlib.h>

int findRepeatedElement(int arr[], int size) {
    int xor_sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        xor_sum ^= arr[i];
    }

    for (i = 1; i < size; i++) {
        xor_sum ^= i;
    }

    return xor_sum;
}

int main() {
    int *arr;
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the elements of the array (numbers from 1 to %d, with one repetition):\n", size - 1);
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int repeated_element = findRepeatedElement(arr, size);
    printf("The repeated element is: %d\n", repeated_element);

    free(arr);

    return 0;
}
