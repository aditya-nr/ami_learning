#include<stdio.h>
#include"main.h"
int main() {
    BOOK books[5];
    int numBooks = 5;
    int searchID;

    // Upload details of 5 books
    uploadBooks(books, numBooks);

    // Search and print book details by ID
    printf("\nEnter the Book ID to search: ");
    scanf("%d", &searchID);
    printBookByID(books, numBooks, searchID);

    return 0;
}