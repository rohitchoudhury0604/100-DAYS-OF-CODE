//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
#include <stdlib.h> 
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    if (numsSize == 0) {
        return answer; 
    }

    for (int i = 0; i < numsSize; i++) {
        answer[i] = 1;
    }

    int prefixProduct = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = prefixProduct;
        prefixProduct *= nums[i];
    }

    int suffixProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffixProduct; 
        suffixProduct *= nums[i];
    }

    return answer;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    int* answer1 = productExceptSelf(nums1, numsSize1, &returnSize1);

    printf("Input: [");
    for (int i = 0; i < numsSize1; i++) {
        printf("%d%s", nums1[i], (i == numsSize1 - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("Output: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d%s", answer1[i], (i == returnSize1 - 1) ? "" : ", ");
    }
    printf("]\n\n");
    free(answer1); 

    int nums2[] = {-1, 1, 0, -3, 3};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    int* answer2 = productExceptSelf(nums2, numsSize2, &returnSize2);

    printf("Input: [");
    for (int i = 0; i < numsSize2; i++) {
        printf("%d%s", nums2[i], (i == numsSize2 - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("Output: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d%s", answer2[i], (i == returnSize2 - 1) ? "" : ", ");
    }
    printf("]\n");
    free(answer2); 

    return 0;

}
