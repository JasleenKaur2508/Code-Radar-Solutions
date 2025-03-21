#include<stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisors up to sqrt(num)
        if (num % i == 0) return 0; // Number is not prime
    }
    return 1; // Number is prime
}



