#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1||num2>0){
        printf("True\n");
    }elseif(num1||num2<0){
        printf("False\n");
    }else{
        printf("False\n");
    }
    return 0;
}