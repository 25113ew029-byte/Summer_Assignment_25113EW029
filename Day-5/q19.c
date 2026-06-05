// write a program to print factor of a number.
#include <stdio.h>
int main() {
int n, i;
int factorial = 1;
 printf("Enter a number: ");
 scanf("%d", &n);
for(i = 1; i <= n; i++) {
 factorial *= i;
}
printf("Factorial of %d = %d\n", n, factorial);
return 0;
}