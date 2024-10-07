#ifndef MAIN_H
#define MAIN_H

/**
 * @brief Structure representing available denominations in the ATM.
 */
typedef struct denominations {
    int _100;        /**< Number of 100 denomination notes */
    int _200;        /**< Number of 200 denomination notes */
    int _500;        /**< Number of 500 denomination notes */
    int _50;         /**< Number of 50 denomination notes */
    int total_money; /**< Total money in the ATM */
} denominations_t;

/**
 * @brief Structure representing a customer with their balance.
 */
typedef struct customer {
    int balance; /**< Balance in the customer's account */
} customer_t;

// Function declarations
void deposit(denominations_t *denom, customer_t *cust);
void withdraw(denominations_t *denom, customer_t *cust);
void balance_enquiry(denominations_t *denom, customer_t *cust);

#endif // MAIN_H
