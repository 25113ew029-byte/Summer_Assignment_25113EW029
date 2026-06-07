// Write a program to recursive reverse number.
#include <stdio.h>
int reverse = 0;
int reverseNumber(int n)
{
if (n == 0)
return reverse;
reverse = reverse * 10 + n % 10;
return reverseNumber(n / 10);
}
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Reversed number = %d", reverseNumber(num));
return 0;
}