//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>
#include <stdlib.h> 
void findTwoSum(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j); 
                return; 
            }
        }
    }
    printf("-1 -1\n"); 
}

int main() {
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int* nums = (int*)malloc(numsSize * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Enter the positive integers for the array:\n");
    for (int i = 0; i < numsSize; i++) {
        printf("nums[%d]: ", i);
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    findTwoSum(nums, numsSize, target);

    free(nums);
    nums = NULL; 

    return 0; 
}
