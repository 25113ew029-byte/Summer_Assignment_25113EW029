// write a program to find factorial of a given number.
#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    for(i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;
}