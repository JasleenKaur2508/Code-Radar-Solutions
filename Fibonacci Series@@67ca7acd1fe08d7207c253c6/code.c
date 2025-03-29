#include<stdio.h>
void fib(int n, int n1, int n2){
    int n3;
    if(n>0){
        n3=n1+n2;
        printf("%d",n3);
        fib(n-1,n2,n3);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n>=1){
        printf("0");
    }
    if(n>=2){
        printf("1");
    }
    fib(n-2,0,1);
    return 0;
}