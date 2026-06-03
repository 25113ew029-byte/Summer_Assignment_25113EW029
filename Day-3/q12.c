// Write a program to find LCM of two numbers.
#include <stdio.h>
int main() {
 int num1, num2, a, b, gcd, lcm;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
 a = num1;
 b = num2;
 while (b != 0) {
 int temp = b;
 b = a % b;
a = temp;
    }
gcd = a;
 lcm = (num1 * num2) / gcd;
 printf("LCM = %d", lcm);
return 0;
}
