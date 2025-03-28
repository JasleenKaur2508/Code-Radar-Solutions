#include<stdio.h>
// Function to generate the Fibonacci series
void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}