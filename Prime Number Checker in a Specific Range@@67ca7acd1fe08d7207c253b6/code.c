#include<stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisors up to sqrt(num)
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

// Function to print all primes in the range [a, b]
void printPrimesInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n"); // Newline after printing all primes
}

