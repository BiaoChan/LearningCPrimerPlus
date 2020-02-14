#include <stdio.h>
#define NUMS 8

int main(void)
{
    int array[NUMS];
    int index;
    printf("Enter %d numbers:\n", NUMS);
    for(index=0; index<NUMS; index++)
        scanf("%d", &array[index]);
    printf("Reverse order:\n");
    for(index=NUMS-1; index>=0; index--)
        printf("%d ", array[index]);
    printf("\n");
    
    return 0;
}