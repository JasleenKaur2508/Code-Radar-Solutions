#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num == 0){
        printf("Zero\n");
    }else if(num < 0){
        printf("Negative\n");
    }else{
        printf("Positive\n");
    }
    return 0;
}