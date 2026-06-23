// Write a program to find maximum accuring character.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count > max) {
            max = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c", maxChar);
    printf("\nFrequency: %d", max);

    return 0;
}