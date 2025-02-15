#include <stdio.h>
int main() {
    int num1 , num2 , greater ;
    scanf("%d %d", &num1, &num2);
    greater = num1 > num2 ;
    if (greater) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}