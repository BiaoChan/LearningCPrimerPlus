#include <stdio.h>

double cube(double val);

int main(void)
{
    double num;
    printf("Enter a number:");
    scanf("%lf", &num);

    printf("%.2f's cube is %.2f\n", num, cube(num));
    
    return 0;
}

double cube(double val)
{
    return val * val * val;
}