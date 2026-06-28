// Write a program to create inventory management system.
#include <stdio.h>

int itemID[100], quantity[100];
int n = 0, i, choice, search, found;

int main() {

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &itemID[n]);

                printf("Enter Quantity: ");
                scanf("%d", &quantity[n]);

                n++;
                break;

            case 2:
                printf("\nItem ID\tQuantity\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%d\n", itemID[i], quantity[i]);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Item ID to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(itemID[i] == search) {
                        printf("Item Found\n");
                        printf("Item ID: %d\n", itemID[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Item Not Found\n");
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