// Write a program to create menu-driven string operation system.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int choice, i, len;

    do {
        printf("\n--- String Operation System ---\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter a string: ");
                scanf("%s", str);
                break;

            case 2:
                printf("String: %s\n", str);
                break;

            case 3:
                printf("Length = %d\n", strlen(str));
                break;

            case 4:
                len = strlen(str);
                for(i = 0; i < len; i++)
                    rev[i] = str[len - i - 1];

                rev[len] = '\0';
                printf("Reversed String: %s\n", rev);
                break;

            case 5:
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase String: %s\n", str);
                break;

            case 6:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}