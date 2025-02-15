#include <stdio.h>
int main() {
    int num1 , num2 , greater ;
    scanf("%d %d", &num1, &num2);
    greater = num1 > num2 ;
    printf("%b", greater);
    return 0;
}