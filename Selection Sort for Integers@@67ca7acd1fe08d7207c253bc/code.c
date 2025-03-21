#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    // ... (Your selection sort implementation here) ...
}

// Function to print the array
void printArray(int arr[], int n) {
    // ... (Your print array implementation here) ...
}

int main() { // Only ONE main function
    int n;

    // Read the number of integers
    scanf("%d", &n);

    int arr[n];

    // Read the integers from input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the selectionSort function
    selectionSort(arr, n);

    // Call the printArray function to print the sorted array
    printArray(arr, n);

    return 0;
}