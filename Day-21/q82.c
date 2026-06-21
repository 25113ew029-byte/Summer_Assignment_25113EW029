// Write a program to reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}