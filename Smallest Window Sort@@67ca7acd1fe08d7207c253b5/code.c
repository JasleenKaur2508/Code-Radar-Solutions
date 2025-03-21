#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find first out-of-order index from left
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }
    if (left == n - 1) {
        return 0; // Already sorted
    }

    // Find first out-of-order index from right
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find min and max in the unsorted subarray
    int min_val = arr[left], max_val = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Expand left boundary
    while (left > 0 && arr[left - 1] > min_val) {
        left--;
    }

    // Expand right boundary
    while (right < n - 1 && arr[right + 1] < max_val) {
        right++;
    }

    return right - left + 1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int arr[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        printf("%d\n", findUnsortedSubarray(arr, N));
    }
    return 0;
}    