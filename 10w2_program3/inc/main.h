#ifndef MAIN_H
#define MAIN_H

// Structure to store book details
typedef struct Book {
    char name[100];
    int id;
    float price;
} BOOK;


/**
 * Function to upload book details
 */
extern  void uploadBooks(BOOK books[], int numBooks) ;

/**
 * Function to print book details based on ID
 */
extern void printBookByID(BOOK books[], int numBooks, int id);

#endif