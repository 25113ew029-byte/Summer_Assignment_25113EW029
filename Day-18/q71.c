// Write a program to binary search.
#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int low = 0, high = 4, mid, key = 30;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");

    return 0;
}