#include<stdio.h>
void printPrimesInRange(int a, int b) {
    int hasPrimes = 0; // Flag to check if any prime numbers exist

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            hasPrimes = 1; // Prime found, update flag
        }
    }

    if (!hasPrimes) {
        printf("No prime numbers\n");
    } else {
        printf("\n"); // Newline after printing primes
    }
}


