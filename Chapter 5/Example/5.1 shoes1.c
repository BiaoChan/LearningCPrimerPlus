#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE*shoe + ADJUST;
    printf("Shoe size(men's)    foot length\n");
    printf("%9.f %15.2f inches\n", shoe, foot);
    
    return 0;
}