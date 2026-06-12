// Write a program to  Write function for palindrome.
#include <stdio.h>
int palindrome(int n)
{
int original = n, reverse = 0, rem;
while (n != 0)
{
rem = n % 10;
reverse = reverse * 10 + rem;
n = n / 10;
}
if (original == reverse)
return 1;
else
return 0;
}
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (palindrome(num))
printf("%d is a palindrome number.", num);
else
printf("%d is not a palindrome number.", num);
return 0;
}