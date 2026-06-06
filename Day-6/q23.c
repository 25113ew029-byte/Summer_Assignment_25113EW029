// write a program to count set bits in a number.
#include <stdio.h>
int main() {
int n, count = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) {
if (n & 1)
 count++;
 n = n >> 1;
 }
printf("Number of set bits = %d\n", count);
return 0;
}