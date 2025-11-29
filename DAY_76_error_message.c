//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content
#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *filePointer;
    char filename[100]; 
    char character;     

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    filePointer = fopen(filename, "r");

    if (filePointer == NULL) {
        printf("Error: Could not open file '%s'. Please check if the file exists and you have read permissions.\n", filename);
        exit(EXIT_FAILURE); 
    }

    printf("File '%s' opened successfully. Content:\n", filename);

    while ((character = fgetc(filePointer)) != EOF) {
        printf("%c", character);
    }

    fclose(filePointer);

    return 0;
}
