#include <stdio.h>
#define pi = 3.14
int main() 
{
    float radius, area ; 
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}