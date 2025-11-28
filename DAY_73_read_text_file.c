//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0; 

    printf("Enter the filename to analyze: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    line_count = 1; 

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') { 
            in_word = 0; 
        } else if (in_word == 0) { 
            word_count++; 
            in_word = 1; 
        }
    }

    if (char_count == 0) {
        line_count = 0;
        word_count = 0;
    } 
  
    printf("\nFile Analysis for: %s\n", filename);
    printf("Total characters: %d\n", char_count);
    printf("Total words: %d\n", word_count);
    printf("Total lines: %d\n", line_count);

    fclose(file);

    return 0;
}
