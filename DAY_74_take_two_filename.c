//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc()
#include <stdio.h>
#include <stdlib.h> 
int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    int ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s.\n", sourceFileName);
        exit(EXIT_FAILURE);
    }

    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s.\n", destFileName);
        fclose(sourceFile); 
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from %s to %s.\n", sourceFileName, destFileName);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
