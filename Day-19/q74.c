// Write a program to subtract matrices.
#include <stdio.h>

int main() {
    int a[2][2] = {{5, 6}, {7, 8}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int c[2][2];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of Matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}