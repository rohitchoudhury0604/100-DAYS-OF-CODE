//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#include <string.h> 

struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int employeeID;
    char name[50];
    float salary;
    struct Date joiningDate; 
};

int main() {
   
    struct Employee emp1;

    emp1.employeeID = 101;
    strcpy(emp1.name, "John Doe"); 
    emp1.salary = 75000.50;

    emp1.joiningDate.day = 15;
    emp1.joiningDate.month = 7;
    emp1.joiningDate.year = 2023;

    printf("Employee Details:\n");
    printf("ID: %d\n", emp1.employeeID);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    return 0;
}
