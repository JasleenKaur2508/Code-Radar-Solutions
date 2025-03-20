#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number >= 1 && number <= 100) {
        printf("In Range\n");
    } else {
        printf("Out of Range\n");
    }

    return 0;
}
