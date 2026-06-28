// Write a program to create employee management system.
#include <stdio.h>

int id[100], salary[100], n = 0, i, choice, search, found;

int main() {
    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                break;

            case 2:
                printf("\nEmployee Records:\n");
                printf("ID\tSalary\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%d\n", id[i], salary[i]);
                }
                break;

            case 3:
                found = 0;

                printf("Enter Employee ID to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(id[i] == search) {
                        printf("Record Found\n");
                        printf("Employee ID: %d\n", id[i]);
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