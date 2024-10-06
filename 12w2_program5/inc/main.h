#ifndef MAIN_H
#define MAIN_H
// Function to add two matrices
extern void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols);

// Function to multiply two matrices
extern void multiplyMatrices(int *mat1, int *mat2, int *result, int rows1, int cols1, int cols2);

// Function to input matrix
extern void inputMatrix(int *matrix, int rows, int cols);

// Function to print matrix
extern void printMatrix(int *matrix, int rows, int cols);
#endif
