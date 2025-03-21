#include<stdio.h>
#include<string.h>
int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char arr[n][100];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    bubbleSort(arr, n);  // Sorting function
    printf("\nSorted strings:\n");
    printArray(arr, n);  // Printing function

    return 0;
}

