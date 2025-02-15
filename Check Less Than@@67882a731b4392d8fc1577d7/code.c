#include <stdio.h>
int main() {
    float num1, num2, lesser;
    scanf("%f %f", &num1, &num2);
    lesser = num1<num2;
    if (lesser){
        printf("True", lesser);
    } else {
        printf("False");
    }
   
    return 0;
}