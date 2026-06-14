// Write a program to find the frequency of an element.
#include <stdio.h>
int getFrequency(int arr[], int size, int target) {
int count = 0;
for (int i = 0; i < size; i++) {
if (arr[i] == target) {
count++; 
}
}
return count;
}
int main() {
int numbers[] = {4, 2, 7, 2, 9, 2, 3, 1, 2};
int size = sizeof(numbers) / sizeof(numbers[0]);
int target = 2;
int frequency = getFrequency(numbers, size, target);
printf("The element %d appears %d times in the array.\n", target, frequency);
return 0;
}