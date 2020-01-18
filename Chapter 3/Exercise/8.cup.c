#include <stdio.h>

int main(void)
{
    int cups, ounce, soup_spoon, tea_spoon;
    float pint;
    printf("Please input the number of cups:");
    scanf("%d", &cups);
    pint = cups/2.0;
    ounce = 8*cups;
    soup_spoon = 2*ounce;
    tea_spoon = 3*soup_spoon;
    printf("%d cups equal to:\n", cups);
    printf("\t%.1f pint\n", pint);
    printf("\t%d ounce\n", ounce);
    printf("\t%d soup_spoon\n", soup_spoon);
    printf("\t%d tea_spoon\n", tea_spoon);
    return 0;
}
