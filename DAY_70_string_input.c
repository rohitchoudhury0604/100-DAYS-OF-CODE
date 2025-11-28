//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void convertToSentenceCase(char* str) {
    int i;
    int capitalizeNext = 1; 

    for (i = 0; str[i] != '\0'; i++) {
        if (capitalizeNext && islower(str[i])) {
            str[i] = toupper(str[i]); 
            capitalizeNext = 0;
        } else if (!capitalizeNext && isupper(str[i])) {
            str[i] = tolower(str[i]); }

        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalizeNext = 1; 
        } else if (isspace(str[i])) {
            if (!capitalizeNext) {
                capitalizeNext = 0;
            }
        } else {
            capitalizeNext = 0;
        }
    }
}

int main() {
    char inputString[1000]; 

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin); 

    inputString[strcspn(inputString, "\n")] = '\0';

    convertToSentenceCase(inputString); 

    printf("Sentence case string: %s\n", inputString);

    return 0;
}
