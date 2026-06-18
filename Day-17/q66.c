// Write a program to union of arrays.
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    int i, j, found;

    printf("Union of arrays: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    for(i = 0; i < 4; i++) {
        found = 0;

        for(j = 0; j < 4; j++) {
            if(b[i] == a[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("%d ", b[i]);
        }
    }

    return 0;
}