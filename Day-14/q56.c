// Write a program to find duplicate in array.
#include <stdio.h>
void findDuplicates(int arr[], int size) {
int foundDuplicate = 0;
printf("Duplicate elements in the array: ");
for (int i = 0; i < size; i++) {
int alreadyPrinted = 0;
for (int k = 0; k < i; k++) {
if (arr[i] == arr[k]) {
alreadyPrinted = 1;
break;
}
}
if (alreadyPrinted) {
continue;
}
for (int j = i + 1; j < size; j++) {
if (arr[i] == arr[j]) {
printf("%d ", arr[i]);
foundDuplicate = 1;
break; 
}
}
}
if (!foundDuplicate) {
printf("None");
 }
printf("\n");
}
int main() {
int numbers[] = {2, 3, 1, 2, 4, 3, 5, 2};
int size = sizeof(numbers) / sizeof(numbers[0]);
printf("Original Array: ");
for(int i = 0; i < size; i++) {
printf("%d ", numbers[i]);
}
printf("\n");
findDuplicates(numbers, size);
return 0;
}