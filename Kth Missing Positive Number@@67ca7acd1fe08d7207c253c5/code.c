#include<stdio.h>
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (true) {
        if (index < n && arr[index] == current) {
            // Current number is in the array, move to the next element
            index++;
        } else {
            // Current number is missing
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }
}
