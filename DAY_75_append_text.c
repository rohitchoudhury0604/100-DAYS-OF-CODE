//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content
#include <stdio.h>
#include <stdlib.h> 

#define MAX_LINE_LENGTH 1024 

int main() {
    FILE *fp;
    char filename[50];
    char line_to_add[MAX_LINE_LENGTH];

    printf("Enter the name of the file to append to: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        perror("Error reading filename");
        return 1;
    }

    for (int i = 0; filename[i] != '\0'; i++) {
        if (filename[i] == '\n') {
            filename[i] = '\0';
            break;
        }
    }

    fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file in append mode");
        return 1; 
    }

    printf("Enter the line of text to append (press Enter to finish): ");
    if (fgets(line_to_add, sizeof(line_to_add), stdin) == NULL) {
        perror("Error reading input line");
        fclose(fp);
        return 1;
    }

    if (fputs(line_to_add, fp) == EOF) {
        perror("Error writing to file");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) == EOF) {
        perror("Error closing file");
        return 1;
    }

    printf("Text successfully appended to %s.\n", filename);

    return 0;
}
