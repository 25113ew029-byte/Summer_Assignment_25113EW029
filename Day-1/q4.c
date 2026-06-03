// write a program to count digit in a number .
#include <stdio.h>
int main() {
int num, count = 0;
printf("Enter a number: ");
scanf("%d", &num);
while(num != 0) {
 num = num / 10;
count++;
 }
 printf("Total digits = %d\n", count);
return 0;
}
