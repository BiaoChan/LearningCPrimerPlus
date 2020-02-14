#include <stdio.h>

int main(void)
{
    int index, terms, symble;
    double sum1, sum2;
    printf("Enter the num of terms you want:");
    scanf("%d", &terms);
    while(terms>0)
    {
        sum1 = sum2 = 1;
        symble = -1;
        for(index=2; index<=terms; index++, symble*=-1)
        {
            sum1 += 1.0/(double)index;
            sum2 += symble*1.0/(double)index;
        }
        printf("The sum of the first %d items in sequence one: %.2f\n", terms, sum1);
        printf("The sum of the forst %d items in sequence two: %.2f\n", terms, sum2);
        printf("\nEnter next num of terms you want:");
        scanf("%d", &terms);
    }
    
    return 0;
}