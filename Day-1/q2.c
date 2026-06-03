//write a program to print multiplication table of a given number.
#include <stdio.h>

int main() {
    int num, i;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print multiplication table
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}