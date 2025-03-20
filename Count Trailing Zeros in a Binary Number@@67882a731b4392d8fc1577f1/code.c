#include<stdio.h>
int main(){
    unsigned int num, count = 0;
    scanf("%u", &num);
    while((num & 1) == 0 && num != 0){
        count++;
        num >>= 1;
    }
    printf("%u\n", count);
    return 0;
}