// Write a program to write function for armstrong.
#include <stdio.h>
int armstrong(int n)
{
int original = n, rem, sum = 0;
while (n != 0)
{
rem = n % 10;
sum = sum + (rem * rem * rem);
n = n / 10;
}
if (original == sum)
return 1;
else
return 0;
}
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (armstrong(num))
printf("%d is an Armstrong number.", num);
else
printf("%d is not an Armstrong number.", num);
return 0;
}