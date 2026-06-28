// Write a program to develop complete mini project using arrays ,string and function.
#include <stdio.h>
#include <string.h>

int roll[100], marks[100], n = 0;
char name[100][50];

// Function to add student
void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student Added Successfully.\n");
}

// Function to display students
void displayStudent() {
    int i;

    if(n == 0) {
        printf("No Records Found.\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n",
               roll[i],
               name[i],
               marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int search, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(roll[i] == search) {
            printf("\nStudent Found\n");
            printf("Roll: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found\n");
}

// Function to delete student
void deleteStudent() {
    int search, i, j, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(roll[i] == search) {
            for(j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
                strcpy(name[j], name[j + 1]);
            }
            n--;
            found = 1;
            printf("Student Record Deleted.\n");
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}