#include<stdio.h>
#include<string.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            // Encrypt lowercase letters
            encrypted[i] = 'a' + (ch - 'a' + shift) % 26;
        } else if (ch >= 'A' && ch <= 'Z') {
            // Encrypt uppercase letters
            encrypted[i] = 'A' + (ch - 'A' + shift) % 26;
        } else {
            // Non-alphabetic characters remain unchanged
            encrypted[i] = ch;
        }
        i++;
    }
    encrypted[i] = '\0'; // Null-terminate the encrypted string
}
