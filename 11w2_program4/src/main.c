#include <stdio.h>
#include <stdlib.h>

// Function to sort an array (using bubble sort for simplicity)
extern void sortArray(int *arr, int size);

int main() {
    int *arr;
    int size;

    // Take input for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory dynamically for the array
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input for the elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sortArray(arr, size);

    // Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
