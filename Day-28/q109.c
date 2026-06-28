// Write a program to crete libarary managemant system.
#include <stdio.h>

int bookid[100], n = 0;
int i, choice, search, found;

int main() {
    do {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookid[n]);
                n++;
                break;

            case 2:
                printf("\nBook Records:\n");
                for(i = 0; i < n; i++) {
                    printf("Book ID: %d\n", bookid[i]);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Book ID to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(bookid[i] == search) {
                        printf("Book Found: %d\n", bookid[i]);
                        found = 1;
                    }
                }

                if(found == 0)
                    printf("Book Not Found\n");
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}