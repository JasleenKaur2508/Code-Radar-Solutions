#include<stdio.h>
int main(){
    int num1, complement;
    scanf("%d", &num1);
    complement = ~num1;
    printf("%d\n",complement);
    
    return 0;
}