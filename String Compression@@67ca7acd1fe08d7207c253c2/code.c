#include<stdio.h>
#include<string.h>

void compressString(char *str, char *compressed) {
    int count = 1;
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed[index++] = str[i]; // Add the character
            if (count > 1) {
                index += sprintf(&compressed[index], "%d", count); // Add the count
            }
            count = 1; // Reset count
        }
    }
    compressed[index] = '\0'; // Null-terminate the compressed string

    // Compare lengths and decide whether to keep the original
    if (strlen(compressed) >= strlen(str)) {
        strcpy(compressed, str);
    }
}
