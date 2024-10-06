// Function to input matrix
void inputMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (matrix + i * cols + j));
        }
    }
}