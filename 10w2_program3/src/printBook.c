#include"main.h"
#include<stdio.h>

// Function to print book details based on ID
void printBookByID(BOOK books[], int numBooks, int id) {
    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].id == id) {
            printf("\nBook Found:\n");
            printf("Book Name: %s\n", books[i].name);
            printf("Book ID: %d\n", books[i].id);
            printf("Book Price: %.2f\n", books[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}