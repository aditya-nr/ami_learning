#include<stdio.h>
// Function to print array elements
void printArray(int arr[], int size, int option) {
    printf("Array elements:\n");
    if (option == 1) { // Print all elements
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else if (option == 2) { 
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 != 0) {
                printf("%d ", arr[i]);
            }
        }
    } else if (option == 3) { // Print only even elements
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");
}
