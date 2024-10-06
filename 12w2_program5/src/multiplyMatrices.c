// Function to multiply two matrices
void multiplyMatrices(int *mat1, int *mat2, int *result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            *(result + i * cols2 + j) = 0;
            for (int k = 0; k < cols1; k++) {
                *(result + i * cols2 + j) += (*(mat1 + i * cols1 + k)) * (*(mat2 + k * cols2 + j));
            }
        }
    }
}