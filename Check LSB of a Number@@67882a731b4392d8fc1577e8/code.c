#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1 & 1){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }
  
    return 0;
}