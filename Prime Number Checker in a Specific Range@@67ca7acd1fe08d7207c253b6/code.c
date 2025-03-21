#include<stdio.h>
void printPrimesInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n"); // Newline after printing all primes
}




