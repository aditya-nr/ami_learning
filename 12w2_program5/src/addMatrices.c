// Function to add two matrices
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}
