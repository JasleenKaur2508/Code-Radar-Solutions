#include<stdio.h>
int findOccurrence(int arr[], int n, int target, char mode) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Target found, store the index
            if (mode == 'F') {
                // Search for the first occurrence
                right = mid - 1;
            } else if (mode == 'L') {
                // Search for the last occurrence
                left = mid + 1;
            }
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result; // Return the index, or -1 if not found
}


