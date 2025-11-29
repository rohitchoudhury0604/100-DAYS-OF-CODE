//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Day {
    MONDAY,    
    TUESDAY,   
    WEDNESDAY, 
    THURSDAY, 
    FRIDAY = 10, 
    SATURDAY,  
    SUNDAY     
};

int main() {
    printf("Demonstrating that enum members store integer values:\n");

    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);

    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);
    printf("SUNDAY: %d\n", SUNDAY);

    enum Day my_day = 5; 
    printf("An enum variable assigned an integer value 5: %d\n", my_day);

    return 0;
}
