#include <stdio.h>

int findUnsortedSubarrayLength(int arr[], int n) {
    int start = -1, end = -1;
    // Finding the initial boundaries
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }
    // If the array is already sorted
    if (start == -1) return 0;

    // Finding the min and max in the unsorted subarray
    int minVal = arr[start], maxVal = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Expanding the boundaries
    while (start > 0 && arr[start - 1] > minVal) start--;
    while (end < n - 1 && arr[end + 1] < maxVal) end++;

    return end - start + 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", findUnsortedSubarrayLength(arr, n));
    }
    return 0;
}
