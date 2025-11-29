//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Day
{
    SUNDAY,   
    MONDAY,    
    TUESDAY,   
    WEDNESDAY, 
    THURSDAY,  
    FRIDAY,   
    SATURDAY   
};

int main()
{
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"};

    printf("Days of the week and their integer values:\n");

    for (enum Day day = SUNDAY; day <= SATURDAY; day++)
    {
        printf("%s: %d\n", dayNames[day], day);
    }

    return 0;
}
