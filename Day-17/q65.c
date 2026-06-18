// Write a program to merge array.
#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[10];
    int i;
    for(i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for(i = 0; i < 5; i++) {
        c[i + 5] = b[i];
    }

    printf("Merged Array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}