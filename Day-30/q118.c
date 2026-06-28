// Write a program to create mini library system.
#include <stdio.h>

int main() {
    int bookID[100], n, i, search, found = 0;
    char bookName[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookID[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);
    }
    printf("\n--- Library Records ---\n");
    printf("Book ID\tBook Name\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\n", bookID[i], bookName[i]);
    }
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(bookID[i] == search) {
            printf("Book Found: %s\n", bookName[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found\n");

    return 0;
}