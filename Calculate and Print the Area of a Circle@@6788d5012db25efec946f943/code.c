#include <stdio.h>
#define pi = 3.14
int main() 
{
    float radius , area ; 
    scanf("%f", &radius);
    area = 2 * pi * radius ;
    printf("Area: %.2f", area);
    return 0;
}