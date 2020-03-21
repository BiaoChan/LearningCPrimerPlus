#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power ");
    printf("to which \nthe number will be raised. Enter q ");
    printf("to quit.\n");
    while(scanf("%lf %d", &x, &exp)==2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    
    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i, neg_flag=0;
    if(p<0)
    {
        neg_flag = 1;
        p *= -1;
    }
    for(i=1; i<=p; i++)
    {
        pow *= n;
    }
    if(neg_flag)
        pow = 1/pow;

    return pow;
}