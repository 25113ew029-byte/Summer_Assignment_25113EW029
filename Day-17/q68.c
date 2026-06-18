// Write a program to find comman elements.
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int i, j;

    printf("Common elements are: ");

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}