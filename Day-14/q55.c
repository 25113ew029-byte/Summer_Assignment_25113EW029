// Write a program to school largest element.
#include <stdio.h>
#include <limits.h> 
int findSecondLargest(int arr[], int size) {
if (size < 2) {
printf("Invalid Input: Array must have at least two elements.\n");
 return INT_MIN; 
}
int largest = INT_MIN;
int secondLargest = INT_MIN;
for (int i = 0; i < size; i++) {
if (arr[i] > largest) {
secondLargest = largest; 
largest = arr[i];       
 }
else if (arr[i] > secondLargest && arr[i] != largest) {
secondLargest = arr[i];
 }
}
return secondLargest;
}
int main() {
int numbers[] = {12, 35, 1, 10, 34, 1};
int size = sizeof(numbers) / sizeof(numbers[0]);
int result = findSecondLargest(numbers, size);
if (result != INT_MIN) {
printf("The second largest element is: %d\n", result);
} else {
printf("No second largest element found (e.g., all elements might be equal).\n");
}
return 0;
}