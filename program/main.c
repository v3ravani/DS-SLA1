#include <stdio.h>
#include "linear-queue.h"
#include "circular-queue.h"

/*
 * Smart Event Ticket Booking System
 * Group 4: Viraj Ravani (64), Disha Mahabdi (65), Mayuri Pawar (66)
 */

int main(void) {
    int choice;          // User menu selection
    int id = 101;        // Auto-incremented ticket ID
    char name[30];       // Customer name buffer

    while (1) {
        printf("\n--- Event Ticket Booking Menu ---\n");
        printf("1. Add Regular Booking (Linear Queue)\n");
        printf("2. Process Regular Booking (Linear Queue)\n");
        printf("3. Display Regular Bookings\n");
        printf("4. Add Last-Minute Booking (Circular Queue)\n");
        printf("5. Process Last-Minute Booking (Circular Queue)\n");
        printf("6. Display Last-Minute Bookings\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Customer Name: ");
                scanf("%s", name);
                enqueueLinear(id++, name); // Pass ID then increment
                break;

            case 2:
                dequeueLinear(); // Process oldest regular booking
                break;

            case 3:
                displayLinear(); // List regular queue contents
                break;

            case 4:
                printf("Enter Customer Name: ");
                scanf("%s", name);
                enqueueCircular(id++, name); // Add to circular rush queue
                break;

            case 5:
                dequeueCircular(); // Process oldest express booking
                break;

            case 6:
                displayCircular(); // List circular queue contents
                break;

            case 7:
                printf("\nExiting program. Thank you!\n");
                return 0; // Terminate cleanly

            default:
                printf("\nInvalid choice! Please enter between 1 and 7.\n");
                break;
        }
    }

    return 0;
}
