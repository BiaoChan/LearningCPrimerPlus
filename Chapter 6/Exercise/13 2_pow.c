#include <stdio.h>
#define NUMS 8

int main(void)
{
    int array[NUMS];
    int index;

    for(index=0; index<NUMS; index++)
        array[index] = 1<<index;
    index = 0;
    do
    {
        printf("%d ", array[index]);
    } while (++index<NUMS);
    printf("\n");    
    
    return 0;
}