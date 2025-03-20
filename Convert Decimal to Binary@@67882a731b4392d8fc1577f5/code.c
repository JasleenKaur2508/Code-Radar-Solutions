#include<stdio.h>
void decimalTobinary(int num){
    if(num == 0){
        printf("0");
        return;
    }
    int binary[32];
    int index = 0;

    while(num > 0){
        binary[index] = num & 1;
        num >>= 1;
        index++;
    }
    for(int i = index - 1; i >= 0; i--){
        printf("%d",binary[i]);
    }
}
int main(){
    int num;
    scanf("%d", &num);
    decimalTobinary(num);
    
    return 0;
}