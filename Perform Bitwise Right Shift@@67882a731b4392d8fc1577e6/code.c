#include<stdio.h>
int main(){
    int num1, shift, result;
    scanf("%d %d", &num1, &shift);
    result = num1 >> shift;
    printf("%d\n",result);
    
    return 0;
}