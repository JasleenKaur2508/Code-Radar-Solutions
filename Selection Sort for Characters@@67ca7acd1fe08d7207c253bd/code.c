#include <stdio.h>

// Function to perform selection sort for characters
void selectionSort(char arr[], int n) {
    int i, j, min_idx;
    char temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the character array
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n"); // Add a newline at the end
}

int main() {
    int n;

    // Read the number of characters
    scanf("%d", &n);

    char arr[n];

    // Read the characters from input
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); // Space before %c to handle whitespace
    }

    // Call the selectionSort function
    selectionSort(arr, n);

    // Call the printArray function to print the sorted array
    printArray(arr, n);

    return 0;
}