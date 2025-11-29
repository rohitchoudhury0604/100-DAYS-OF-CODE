//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h> 

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp_write, emp_read;

    fp = fopen("employees.bin", "wb"); 
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp_write.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp_write.name); 
    printf("Enter Employee Salary: ");
    scanf("%f", &emp_write.salary);

    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    printf("Employee data written to file successfully.\n");

    fclose(fp); 

    fp = fopen("employees.bin", "rb"); 
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    printf("\nEmployee data read from file:\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    fclose(fp); 

    return 0;
}
