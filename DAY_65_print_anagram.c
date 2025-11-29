#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For exit() if using dynamic allocation, though not strictly needed here

#define ALPHABET_SIZE 26 // For lowercase English alphabet

int main() {
    char s[100], t[100]; // Assuming maximum string length of 99 characters
    int freq_s[ALPHABET_SIZE] = {0}; // Frequency array for string s
    int freq_t[ALPHABET_SIZE] = {0}; // Frequency array for string t
    int i;

    printf("Enter the first string (s): ");
    scanf("%s", s);

    printf("Enter the second string (t): ");
    scanf("%s", t);

    // Check if lengths are different, if so, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Calculate frequencies for string s
    for (i = 0; s[i] != '\0'; i++) {
        freq_s[s[i] - 'a']++;
    }

    // Calculate frequencies for string t
    for (i = 0; t[i] != '\0'; i++) {
        freq_t[t[i] - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (freq_s[i] != freq_t[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

