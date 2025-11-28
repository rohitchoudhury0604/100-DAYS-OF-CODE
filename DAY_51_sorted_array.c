//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}


int findLastOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int nums[] = {1, 2, 3, 4, 4, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 4;

    int firstOccurrence = findFirstOccurrence(nums, size, target);
    int lastOccurrence = findLastOccurrence(nums, size, target);

    printf("First occurrence of %d: Index %d\n", target, firstOccurrence);
    printf("Last occurrence of %d: Index %d\n", target, lastOccurrence);

    target = 9;
    firstOccurrence = findFirstOccurrence(nums, size, target);
    lastOccurrence = findLastOccurrence(nums, size, target);

    printf("First occurrence of %d: Index %d\n", target, firstOccurrence);
    printf("Last occurrence of %d: Index %d\n", target, lastOccurrence);

    return 0;
}
