#include <stdio.h>

int main(void)
{
    double a, b;

    printf("Please enter two number:\n");
    while(scanf("%lf %lf", &a, &b) == 2)
    {
        printf("(%.2f-%.2f)/(%.2f*%.2f) = %.2f\n", 
            a, b, a, b, (a-b)/(a*b));
        printf("Please enter next two number(q to quit):\n");
    }
    
    return 0;
}