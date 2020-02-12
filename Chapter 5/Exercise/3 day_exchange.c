#include <stdio.h>
#define D_PER_W 7

int main(void)
{
    int days, weeks, wdays;

    printf("Please enter days(<=0 to exit):");
    while(scanf("%d", &days) && days > 0)
    {
        weeks = days / D_PER_W;
        wdays = days % D_PER_W;
        printf("%d days equals to %d weeks and %d days\n", days, weeks, wdays);

        printf("\nPlease enter days(<=0 to exit):");
    }
    
    return 0;
}