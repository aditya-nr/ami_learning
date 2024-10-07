#include <stdio.h>
#include "main.h"

/**
 * @brief Function to check balance and display available denominations
 * 
 * @param denom Pointer to denominations structure
 * @param cust Pointer to customer structure
 */
void balance_enquiry(denominations_t *denom, customer_t *cust) {
    printf("\nTotal Balance: %d\n", cust->balance);
    printf("Denominations: 500=%d, 200=%d, 100=%d, 50=%d\n", denom->_500, denom->_200, denom->_100, denom->_50);
}
