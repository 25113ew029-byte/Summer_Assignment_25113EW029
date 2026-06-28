// Write a program to create mini employee management system.
#include <stdio.h>

int main() {
    int empID[100], salary[100];
    char empName[100][50];
    int n, i, search, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empID[i]);

        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }
    printf("\n--- Employee Records ---\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n",
               empID[i],
               empName[i],
               salary[i]);
    }
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(empID[i] == search) {
            printf("Employee Found\n");
            printf("ID: %d\n", empID[i]);
            printf("Name: %s\n", empName[i]);
            printf("Salary: %d\n", salary[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found\n");

    return 0;
}