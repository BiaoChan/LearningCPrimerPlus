#include <stdio.h>

int main(void)
{
    int sum, lower, upper, index;
    printf("Enter lower an upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while(lower<upper)
    {
        for(sum=0, index = lower; index<=upper; index++)
            sum += index*index;
        printf("The sums of the squares from %d to %d is %d\n",
            lower*lower, upper*upper, sum);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done!\n");
    
    return 0;
}