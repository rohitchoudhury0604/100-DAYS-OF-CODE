//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int getDaysInMonth(enum Month month, int year) {
    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; 
    }
}

int main() {
    int year;

    printf("Enter a year to check for leap year status (e.g., 2024): ");
    scanf("%d", &year);

    printf("\nNumber of days in each month for the year %d:\n", year);

    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        int days = getDaysInMonth(m, year);

        switch (m) {
            case JANUARY: printf("January: %d days\n", days); break;
            case FEBRUARY: printf("February: %d days\n", days); break;
            case MARCH: printf("March: %d days\n", days); break;
            case APRIL: printf("April: %d days\n", days); break;
            case MAY: printf("May: %d days\n", days); break;
            case JUNE: printf("June: %d days\n", days); break;
            case JULY: printf("July: %d days\n", days); break;
            case AUGUST: printf("August: %d days\n", days); break;
            case SEPTEMBER: printf("September: %d days\n", days); break;
            case OCTOBER: printf("October: %d days\n", days); break;
            case NOVEMBER: printf("November: %d days\n", days); break;
            case DECEMBER: printf("December: %d days\n", days); break;
            default: break;
        }
    }

    return 0;
}