#include <stdio.h>

double fun_ab(double a, double b);

int main(void)
{
    double a, b;

    printf("Please enter two number:\n");
    while(scanf("%lf %lf", &a, &b) == 2)
    {
        printf("(%.2f-%.2f)/(%.2f*%.2f) = %.2f\n", 
            a, b, a, b, fun_ab(a, b));
        printf("Please enter next two number(q to quit):\n");
    }
    
    return 0;
}

double fun_ab(double a, double b)
{
    return (a-b)/(a*b);
}