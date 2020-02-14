#include <stdio.h>

int main(void)
{
    double account = 1000000;
    int years = 0;
    do
    {
        printf("year:%d money:%.1f\n", years, account);
        account = account*1.08-100000.0;
        years++;
    } while (account>0);
    
    printf("It took %d years for lucky to spend all one billion dollor\n", years);
    
    return 0;
}