#include <stdio.h>
#define NUMS 8

int main(void)
{
    double array[NUMS], sum[NUMS];
    int index;
    printf("Enter %d numbers:\n", NUMS);
    for(index=0; index<NUMS; index++)
        scanf("%lf", &array[index]);
    for(sum[0]=array[0], index=1; index<NUMS; index++)
        sum[index] = sum[index-1] + array[index];

    for(index=0; index<NUMS; index++)
        printf("%10.2f", array[index]);
    printf("\n");

    for(index=0; index<NUMS; index++)
        printf("%10.2f", sum[index]);
    printf("\n");
    
    return 0;
}