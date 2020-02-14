#include <stdio.h>

int main(void)
{
    int upper, lower, index;
    printf("Enter an upper limit number and a lower limit number:");
    scanf("%d %d", &upper, &lower);
    printf("  n     square n    cube n\n");
    for(index=lower; index<=upper; index++)
    {
        printf("%3d         %d      %d\n", index, index*index, index*index*index);
    }

    return 0;
}