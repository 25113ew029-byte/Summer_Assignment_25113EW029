// Write a program to find with fibonacci term.
#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Nth Fibonacci number is: %d", first);
    }
    else if (n == 2) {
        printf("Nth Fibonacci number is: %d", second);
    }
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Nth Fibonacci number is: %d", second);
    }

    return 0;
}