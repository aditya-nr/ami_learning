// Function to sort the array
void sortArray(int arr[], int size, int order) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((order == 1 && arr[i] > arr[j]) || (order == 2 && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}