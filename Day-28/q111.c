// Write a program to create ticket booking system.
#include <stdio.h>

int totalSeats = 10, booked = 0;
int choice, tickets;

int main() {

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);

                if(tickets <= (totalSeats - booked)) {
                    booked = booked + tickets;
                    printf("Ticket booked successfully.\n");
                }
                else {
                    printf("Tickets not available.\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats - booked);
                break;

            case 3:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 3);

    return 0;
}