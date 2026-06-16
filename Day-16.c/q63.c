// Write a program to find pair with given sum.
#include <stdio.h>
int main() {
int n, sum, i, j, found = 0;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array:\n");
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter the required sum: ");
scanf("%d", &sum);
printf("Pairs with sum %d are:\n", sum);
for(i = 0; i < n - 1; i++) {
for(j = i + 1; j < n; j++) {
if(arr[i] + arr[j] == sum) {
printf("(%d, %d)\n", arr[i], arr[j]);
found = 1;
}
}
}
if(found == 0) {
printf("No pair found.");
}
return 0;
}