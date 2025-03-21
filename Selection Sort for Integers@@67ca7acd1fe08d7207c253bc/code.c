#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

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

int main() {
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

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline at the end

    return 0;
}
