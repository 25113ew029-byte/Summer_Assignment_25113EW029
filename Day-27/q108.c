 // Write a program to create marksheet generation system.
 #include <stdio.h>

int main() {
    int roll, m1, m2, m3, total;
    float percentage;

    printf("----- Marksheet Generation System -----\n");

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n----- Marksheet -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Subject 1   : %d\n", m1);
    printf("Subject 2   : %d\n", m2);
    printf("Subject 3   : %d\n", m3);
    printf("Total Marks : %d\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 40)
        printf("Result      : Pass\n");
    else
        printf("Result      : Fail\n");

    return 0;
}