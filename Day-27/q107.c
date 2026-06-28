// Write a program to create salary management system.
#include <stdio.h>

int empid[100], salary[100], n = 0;
int i, choice, search, found;

int main() {
    do {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empid[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                break;

            case 2:
                printf("\nEmployee ID\tSalary\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t\t%d\n", empid[i], salary[i]);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Employee ID to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(empid[i] == search) {
                        printf("\nRecord Found\n");
                        printf("Employee ID: %d\n", empid[i]);
                        printf("Salary: %d\n", salary[i]);
                        found = 1;
                    }
                }

                if(found == 0)
                    printf("Record Not Found\n");
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}