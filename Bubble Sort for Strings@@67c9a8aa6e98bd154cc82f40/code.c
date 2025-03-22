#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][100];

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    qsort(arr, n, sizeof(arr[0]), compareStrings);

    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}



