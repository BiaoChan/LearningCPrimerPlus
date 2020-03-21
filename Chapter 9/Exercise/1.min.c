#include <stdio.h>

double min(double a, double b);
int main(void)
{
    double a, b;
    printf("Please enter tow number:\n");
    scanf("%lf %lf", &a, &b);
    printf("The min number of %.2f and %.2f is %.2f\n", a, b, min(a,b));
    
    return 0;
}

double min(double a, double b)
{
    return a<b?a:b;
}