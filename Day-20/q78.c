// Write a program to check symmetrical matrix.
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, flag = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is Not Symmetric.");

    return 0;
}