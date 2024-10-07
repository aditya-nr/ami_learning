#include <stdio.h>
#include "main.h"

/**
 * @brief Function to withdraw money from the ATM
 * 
 * @param denom Pointer to denominations structure
 * @param cust Pointer to customer structure
 */
void withdraw(denominations_t *denom, customer_t *cust) {
    int amount;
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    // Check for valid withdrawal input
    if (amount > cust->balance) {
        printf("Insufficient balance!\n");
        return;
    }

    // Check if amount can be withdrawn with available denominations
    if (amount % 50 != 0) {
        printf("Invalid amount. It must be a multiple of 50.\n");
        return;
    }

    // Calculate and decrement denominations
    int remaining = amount;

    int withdraw500 = (remaining >= 500 && denom->_500 > 0) ? remaining / 500 : 0;
    if (withdraw500 > denom->_500) withdraw500 = denom->_500;
    remaining -= withdraw500 * 500;

    int withdraw200 = (remaining >= 200 && denom->_200 > 0) ? remaining / 200 : 0;
    if (withdraw200 > denom->_200) withdraw200 = denom->_200;
    remaining -= withdraw200 * 200;

    int withdraw100 = (remaining >= 100 && denom->_100 > 0) ? remaining / 100 : 0;
    if (withdraw100 > denom->_100) withdraw100 = denom->_100;
    remaining -= withdraw100 * 100;

    int withdraw50 = (remaining >= 50 && denom->_50 > 0) ? remaining / 50 : 0;
    if (withdraw50 > denom->_50) withdraw50 = denom->_50;
    remaining -= withdraw50 * 50;

    // If remaining is not zero, the amount can't be withdrawn exactly with available denominations
    if (remaining != 0) {
        printf("Sorry, the amount cannot be withdrawn with the available denominations.\n");
        return;
    }

    // Update the balance and denominations
    cust->balance -= amount;
    denom->_500 -= withdraw500;
    denom->_200 -= withdraw200;
    denom->_100 -= withdraw100;
    denom->_50 -= withdraw50;

    // Update total money in the ATM
    denom->total_money -= amount;

    printf("Withdrawal successful. New balance: %d\n", cust->balance);
}
