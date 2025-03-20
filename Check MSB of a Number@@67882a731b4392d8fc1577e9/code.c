#include<stdio.h>
#define INT_BITS 32
int main(){
    unsigned int num1;
    scanf("%u", &num1);
    if(num1 & (1 << (INT_BITS - 1))){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }
  
    return 0;
}