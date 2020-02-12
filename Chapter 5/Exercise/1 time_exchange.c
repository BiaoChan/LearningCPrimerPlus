#include <stdio.h>
#define M_PER_H 60

int main(void)
{
    int minutes, hours, hminutes;
    printf("Please enter mintues(<=0 to quit).\n");
    scanf("%d", &minutes);
    while(minutes > 0)
    {
        hours = minutes / M_PER_H;
        hminutes = minutes % M_PER_H;
        printf("%d minutes equal to %d hours and %d minutes.\n\n", minutes, hours, hminutes);
        printf("Please enter minutes(<=0 to quit).\n");
        scanf("%d", &minutes);
    }

    
    return 0;
}