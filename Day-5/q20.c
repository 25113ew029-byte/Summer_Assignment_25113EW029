// Write a program to find largest prime factor.
#include <stdio.h>
int main() {
int n, i;
 int largestPrimeFactor = 1;
printf("Enter a number: ");
scanf("%d", &n);
for (i = 2; i <= n; i++) {
 while (n % i == 0) {
largestPrimeFactor = i;
 n /= i;
 }
 }
printf("Largest Prime Factor = %d\n", largestPrimeFactor);
return 0;
}