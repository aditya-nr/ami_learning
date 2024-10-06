#include <stdio.h>

void inputArray(int arr[], int *size)
{
    printf("Enter the number of elements: ");
    scanf("%d", size);
    printf("Enter %d elements:\n", *size);
    for (int i = 0; i < *size; i++)
    {
        scanf("%d", &arr[i]);
    }
}