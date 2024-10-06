#include <stdio.h>
#include <stdlib.h>
#include"main.h"

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check for matrix multiplication condition
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible with these dimensions.\n");
        return -1;
    }

    // Dynamically allocate memory for matrices
    int *mat1 = (int *)malloc(rows1 * cols1 * sizeof(int));
    int *mat2 = (int *)malloc(rows2 * cols2 * sizeof(int));
    int *addResult = (int *)malloc(rows1 * cols1 * sizeof(int));
    int *mulResult = (int *)malloc(rows1 * cols2 * sizeof(int));

    if (mat1 == NULL || mat2 == NULL || addResult == NULL || mulResult == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    // Input matrices
    printf("Enter elements of first matrix:\n");
    inputMatrix(mat1, rows1, cols1);

    printf("Enter elements of second matrix:\n");
    inputMatrix(mat2, rows2, cols2);

    // Add matrices if dimensions match
    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(mat1, mat2, addResult, rows1, cols1);
        printf("Matrix after addition:\n");
        printMatrix(addResult, rows1, cols1);
    } else {
        printf("Matrix addition not possible due to mismatched dimensions.\n");
    }

    // Multiply matrices
    multiplyMatrices(mat1, mat2, mulResult, rows1, cols1, cols2);
    printf("Matrix after multiplication:\n");
    printMatrix(mulResult, rows1, cols2);

    // Free allocated memory
    free(mat1);
    free(mat2);
    free(addResult);
    free(mulResult);

    return 0;
}
