// Write a program to crete bank account system.
#include <stdio.h>

int accountNo, balance = 0, amount, choice;

int main() {
    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    do {
        printf("\n--- Bank Account System ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance = balance + amount;
                printf("Amount Deposited Successfully\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);

                if(amount <= balance) {
                    balance = balance - amount;
                    printf("Amount Withdrawn Successfully\n");
                }
                else {
                    printf("Insufficient Balance\n");
                }
                break;

            case 3:
                printf("Account Number: %d\n", accountNo);
                printf("Current Balance: %d\n", balance);
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