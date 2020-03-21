#include <stdio.h>

void larger_of(double *x, double *y);

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    larger_of(&a, &b);
    printf("%.2f %.2f\n", a, b);
    
    return 0;
}

void larger_of(double *x, double *y)
{
    *x = *y = *x>*y?*x:*y;
}