// write a program  to intersection of arrays.
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    int i, j;

    printf("Intersection of arrays: ");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}