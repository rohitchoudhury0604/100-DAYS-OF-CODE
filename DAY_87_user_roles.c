//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole currentUserRole = ADMIN; 
    switch (currentUserRole) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        default:
            printf("Unknown user role.\n");
            break;
    }

    currentUserRole = USER;
    switch (currentUserRole) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        default:
            printf("Unknown user role.\n");
            break;
    }

    return 0;
}
