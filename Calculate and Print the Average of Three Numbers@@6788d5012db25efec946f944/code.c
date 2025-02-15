#include <stdio.h>
int main() {
    int num1 , num2 , num3 , average;
    scanf("%f %f %f",&num1,&num2,&num3);
   
    average = (num1+num2+num3)/3;
    printf("Average: %.2f",average);
    return 0;
}