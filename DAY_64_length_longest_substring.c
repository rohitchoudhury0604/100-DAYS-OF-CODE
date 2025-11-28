//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }

    int maxLength = 0;
    int left = 0;
    int lastSeen[256]; 
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    for (int right = 0; right < n; right++) {
        char currentChar = s[right];

        if (lastSeen[(int)currentChar] != -1 && lastSeen[(int)currentChar] >= left) {
            left = lastSeen[(int)currentChar] + 1;
        }

        lastSeen[(int)currentChar] = right;

        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    char s[100]; 
    printf("Enter a string: ");
    scanf("%s", s); 

    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", length);

    return 0;
}
