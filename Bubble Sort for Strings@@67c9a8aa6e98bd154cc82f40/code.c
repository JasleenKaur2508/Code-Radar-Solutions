#include <stdio.h>
#include <string.h>  // Include this for strcmp and strcpy

// Function to sort an array of strings using bubble sort
void bubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the strings
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char arr[n][100];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    bubbleSort(arr, n);
    printf("\nSorted strings:\n");
    printArray(arr, n);

    return 0;
}
