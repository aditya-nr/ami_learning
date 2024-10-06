#include"main.h"
#include<stdio.h>
// Function to upload book details

void uploadBooks(BOOK books[], int numBooks) {
    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Enter Book Name: ");
        scanf(" %[^\n]s", books[i].name);
        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);
        printf("Enter Book Price: ");
        scanf("%f", &books[i].price);
    }
}