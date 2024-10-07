#include <stdio.h>
#include "main.h"

/**
 * @brief Function to deposit money into the ATM
 * 
 * @param denom Pointer to denominations structure
 * @param cust Pointer to customer structure
 */
void deposit(denominations_t *denom, customer_t *cust) {
    printf("Deposit money (valid denominations: 500, 200, 100, 50):\n");

    printf("Enter number of 500 bills: ");
    scanf("%d", &denom->_500);
    printf("Enter number of 200 bills: ");
    scanf("%d", &denom->_200);
    printf("Enter number of 100 bills: ");
    scanf("%d", &denom->_100);
    printf("Enter number of 50 bills: ");
    scanf("%d", &denom->_50);

    // Calculate total money in ATM
    denom->total_money = (denom->_500 * 500) + (denom->_200 * 200) + (denom->_100 * 100) + (denom->_50 * 50);

    // Update customer's balance
    cust->balance = denom->total_money;

    printf("\nTotal Balance: %d\n", cust->balance);
    printf("Denominations: 500=%d, 200=%d, 100=%d, 50=%d\n", denom->_500, denom->_200, denom->_100, denom->_50);
}
