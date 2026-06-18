// Write a program to transpose matrices.
#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int i, j;

    printf("Transpose Matrix:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}