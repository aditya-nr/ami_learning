#define LENGTH 10

// display the array
void printArray(int arr[],int length){
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
}
// Function to count even numbers in the array
int countEvenNumbers(int arr[], int length) {
    int evenCount = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    
    return evenCount;
}

// Function to sort the array in ascending order
void sortAscending(int arr[], int length) {
    int temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort the array in descending order
void sortDescending(int arr[], int length) {
    int temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to remove duplicates from the array and print the unique array
void removeDuplicates(int arr[], int *length) {
    int ARR_LEN=*length;
    // Sort in ascending order
    sortAscending(arr, ARR_LEN);

    // remove duplicate element in array
    int j=0;
    for (int i = 1; i < ARR_LEN; i++) {
        if (arr[i] != arr[j]) {
            arr[++j] = arr[i];
        }
    }

    // update the length of array
    *length=j+1;
}
