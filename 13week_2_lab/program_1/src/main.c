#include <stdio.h>
#include "main.h"

int main()
{
    int arr[1000], size, option, sortOption;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Get input elements for array\n");
        printf("2. Print elements in array\n");
        printf("3. Reverse the elements in array\n");
        printf("4. Sort the elements in array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            inputArray(arr, &size);
            break;
        case 2:
            printf("Choose print option:\n");
            printf("1. All elements\n");
            printf("2. Only odd elements\n");
            printf("3. Only even elements\n");
            scanf("%d", &option);
            printArray(arr, size, option);
            break;
        case 3:
            reverseArray(arr, size);
            printf("Array has been reversed.\n");
            break;
        case 4:
            printf("Choose sort order:\n");
            printf("1. Ascending order\n");
            printf("2. Descending order\n");
            scanf("%d", &sortOption);
            sortArray(arr, size, sortOption);
            printf("Array has been sorted.\n");
            break;
        case 5:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}
