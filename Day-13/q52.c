// Write a program to count even and odd element.
#include <stdio.h>
int main() {
int arr[100], n, i;
int even = 0, odd = 0;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for(i = 0; i < n; i++) {
if(arr[i] % 2 == 0)
even++;
else
odd++;
}
printf("Number of even elements = %d\n", even);
printf("Number of odd elements = %d\n", odd);
return 0;
}