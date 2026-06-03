// Write a program to print Armstrong number ina range.
#include <stdio.h>
int main() {
int start, end, num, originalNum, remainder, result;
printf("Enter start of range: ");
scanf("%d", &start);
 printf("Enter end of range: ");
scanf("%d", &end);
printf("Armstrong numbers between %d and %d are:\n", start, end);
for (num = start; num <= end; num++) {
 originalNum = num;
 result = 0;
while (originalNum != 0) {
 remainder = originalNum % 10;
result += remainder * remainder * remainder; 
 originalNum /= 10;
     }
if (result == num) {
 printf("%d ", num);
 }
 }
 printf("\n");
 return 0;
}
