// Write a program to print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE
#include <stdio.h>
int main() {
int i, j, n = 5;
for(i = 1; i <= n; i++) {
for(j = 1; j <= i; j++) {
printf("%c", 'A' + i - 1);
}
printf("\n");
}
return 0;
}