// write a program to write function to find maximum.
#include <stdio.h>
int maximum(int a, int b)
{
if (a > b)
return a;
else
 return b;
}
int main()
{
int num1, num2, max;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
max = maximum(num1, num2);
printf("Maximum number = %d", max);
return 0;
}