// Function to sort an array of strings using selection sort
void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        // Swap the found minimum string with the first string
        char temp[100];
        strcpy(temp, arr[minIndex]);
        strcpy(arr[minIndex], arr[i]);
        strcpy(arr[i], temp);
    }
}

// Function to print an array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
