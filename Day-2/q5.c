// write a program to find sum of digit of a number
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  // Extract last digit
        sum = sum + digit; // Add digit to sum
        num = num / 10;    // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}