#include <stdio.h>
#include <float.h>

int main(void)
{
    double dbl = 1.0/3.0;
    float flt = 1.0/3.0;
    printf("double:%.6f %.12f %.16f\n", dbl, dbl, dbl);
    printf("float: %.6f %.12f %.16f\n", flt, flt, flt);
    printf("%d %d\n", FLT_DIG, DBL_DIG);
    
    return 0;
}