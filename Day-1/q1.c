// write  a program to calculate sum of first N natural numbers.
#include <stdio.h>
int main() {
    int n, sum;
printf("Enter a number: ");
    scanf("%d", &n);
sum = n * (n + 1) / 2;
printf("Sum of first %d natural numbers = %d\n", n, sum);
 return 0;
}
