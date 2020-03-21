#include <stdio.h>

double th_ave(double a, double b);

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2f\n", th_ave(a, b));
    
    return 0;
}

double th_ave(double a, double b)
{
    return 1/((1/a+1/b)/2);
}