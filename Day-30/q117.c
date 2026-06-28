// Write a program to create student record system using arrays and strings.
#include <stdio.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
    printf("\n--- Student Records ---\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n",
               roll[i],
               name[i],
               marks[i]);
    }

    return 0;
}