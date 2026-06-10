// write a program to write function to find factorial.
#include <stdio.h>
long int factorial(int n)
{
long int fact = 1;
int i;
for (i = 1; i <= n; i++)
{
fact = fact * i;
}
return fact;
}

int main()
{
int num;
long int result;
printf("Enter a number: ");
scanf("%d", &num);
result = factorial(num);
printf("Factorial of %d = %ld", num, result);
return 0;
}