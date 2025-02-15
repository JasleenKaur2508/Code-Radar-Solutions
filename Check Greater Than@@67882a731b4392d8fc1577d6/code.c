#include <stdio.h>
int main() {
    bool num1 , num2 , greater ;
    scanf("%d %d", &num1, &num2);
    greater = num1 > num2 ;
    printf("%c", greater);
    return 0;
}