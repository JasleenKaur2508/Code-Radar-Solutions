#include<stdio.h>
int main(){
    int num1, bit_position, bit_value;
    scanf("%d %d", &num1, &bit_position);
    bit_value = (num1 >> bit_position) & 1;
    printf("%d\n", bit_value);
  
    return 0;
}