// Write a program to check anagram strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, temp;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < len1 - 1; i++) {
        for(j = i + 1; j < len1; j++) {
            if(str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }

            if(str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(strcmp(str1, str2) == 0)
        printf("Anagram Strings");
    else
        printf("Not Anagram");

    return 0;
}