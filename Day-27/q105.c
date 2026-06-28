// Write a program to create student record management system.
#include <stdio.h>

int roll[100], marks[100], n = 0, i, choice, search, found;

int main() {
    do {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                break;

            case 2:
                printf("\nStudent Records:\n");
                printf("Roll\tMarks\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%d\n", roll[i], marks[i]);
                }
                break;

            case 3:
                found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(roll[i] == search) {
                        printf("Record Found\n");
                        printf("Roll: %d\n", roll[i]);
                        printf("Marks: %d\n", marks[i]);
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