#include<stdio.h>
int main(){
    unsigned int num;
    scanf("%u", &num);
    if(num == 0){
        printf("-1\n");
    }else{
        printf("%d\n", __builtin_ctz(num));
    }
    return 0;
}