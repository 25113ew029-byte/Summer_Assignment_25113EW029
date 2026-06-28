// Write a program to create contact management system.
#include <stdio.h>

char name[100][20];
long long phone[100];
int n = 0, i, choice, search, found;

int main() {

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Phone Number: ");
                scanf("%lld", &phone[n]);

                n++;
                break;

            case 2:
                printf("\nContact List:\n");
                for(i = 0; i < n; i++) {
                    printf("%s\t%lld\n", name[i], phone[i]);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Phone Number to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++) {
                    if(phone[i] == search) {
                        printf("Contact Found\n");
                        printf("Name: %s\n", name[i]);
                        printf("Phone: %lld\n", phone[i]);
                        found = 1;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found\n");
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