// Write a program to Bubble sort.
#include <stdio.h>

int main() {
    int a[5] = {5, 2, 4, 1, 3};
    int i, j, temp;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}