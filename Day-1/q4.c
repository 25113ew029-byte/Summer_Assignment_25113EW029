// write a program to count digit in a number .
#include <stdio.h>

int main() {
    int num, count = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count digits
    while(num != 0) {
        num = num / 10;
        count++;
    }

    // Display result
    printf("Total digits = %d\n", count);

    return 0;
}