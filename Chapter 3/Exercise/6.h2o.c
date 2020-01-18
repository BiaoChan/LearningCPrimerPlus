#include <stdio.h>

int main(void)
{
    double h2o_num, quart;

    printf("Please input the quart value:");
    scanf("%lf", &quart);
    h2o_num = quart*950/3e-23;
    printf("there is %e h2o in %f quart water.\n", h2o_num, quart);

    return 0;
}
