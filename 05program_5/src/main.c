#include <stdio.h>
#include "main.h"


int main() {
    int arr[LENGTH];
    // Input array elements
    printf("Enter %d elements of the array:", LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        scanf("%d", &arr[i]);
    }

    // 1. Count even numbers
    int evenCount=countEvenNumbers(arr, LENGTH);
    printf("Total even numbers in array : %d\n",evenCount);

    // 2. Sort the array in ascending order
    sortAscending(arr, LENGTH);
    printf("Array sorted in ascending order: [ ");
    printArray(arr,LENGTH);
    printf("]\n");

    // 3. Sort the array in descending order
    sortDescending(arr, LENGTH);
    printf("Array sorted in descending order: [ ");
    printArray(arr,LENGTH);
    printf("]\n");

    // 4. Remove duplicates and print the unique array
    int newLength=LENGTH;
    removeDuplicates(arr, &newLength);
    printf("After removing duplicate numbers : [ ");
    printArray(arr,newLength);
    printf("]\n");

    return 0;
}

