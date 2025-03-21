#include<stdio.h>
#include<string.h>

void compressString(char *str, char *compressed) {
    int count = 1;
    int index = 0; // Index for the compressed string

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed[index++] = str[i]; // Add the character
            if (count > 1) {
                index += sprintf(&compressed[index], "%d", count); // Add the count if > 1
            }
            count = 1; // Reset count for the next character
        }
    }
    compressed[index] = '\0'; // Null-terminate the compressed string
}
