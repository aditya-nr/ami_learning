#include <stdio.h>
#include "main.h"

/**
 * @brief Main function to drive the ATM system.
 * 
 * This function initializes the ATM system with an initial deposit,
 * then provides a menu for withdrawing money, checking the balance, and exiting.
 * 
 * @return int Returns 0 on successful execution.
 */
int main() {
    denominations_t denom = {0, 0, 0, 0, 0}; /**< Initializes all denomination counts and total money to 0 */
    customer_t cust = {0}; /**< Initializes customer balance to 0 */

    int choice;

    // Deposit money initially
    deposit(&denom, &cust);

    // Main menu loop
    do {
        printf("\nATM Menu:\n");
        printf("1. Withdraw Money\n");
        printf("2. Balance Enquiry\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                withdraw(&denom, &cust);
                break;
            case 2:
                balance_enquiry(&denom, &cust);
                break;
            case 3:
                printf("Thanks for visiting!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
