//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h> 

int main() {
    FILE *file;
    char ch;
    int vowels = 0;
    int consonants = 0;
    char filename[100];

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r"); 

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; 
    }

    while ((ch = fgetc(file)) != EOF) { 
        if (isalpha(ch)) { 
            ch = toupper(ch); 

            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file); 
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0; 
}
