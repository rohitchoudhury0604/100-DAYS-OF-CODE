Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input_str[100];
    char *day_str, *month_str, *year_str;
    int month_int;
    
    char *month_names[] = {
        "INVALID", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter a date (dd/mm/yyyy): \n");
    fgets(input_str, 100, stdin);
    input_str[strcspn(input_str, "\n")] = 0;

    day_str = strtok(input_str, "/");
    month_str = strtok(NULL, "/");
    year_str = strtok(NULL, "/");

    if (day_str != NULL && month_str != NULL && year_str != NULL)
    {
        month_int = atoi(month_str);

        if (month_int >= 1 && month_int <= 12)
        {
            printf("%s-%s-%s\n", day_str, month_names[month_int], year_str);
        }
        else
        {
            printf("Invalid month input.\n");
        }
    }
    else
    {
        printf("Invalid date format.\n");
    }

    return 0;
}
