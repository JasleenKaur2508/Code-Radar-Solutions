#include<stdio.h>
int main(){
    int num, bit_position, updated_num;
    scanf("%d %d", &num, &bit_position);
    updated_num = num ^ (1 << bit_position);
    printf("%d\n", updated_num);
  
    return 0;
}