#include <stdio.h>
#define PRINT_RANGE

int main(void)
{
    int num, num_end;
    printf("Please enter a num:");
    scanf("%d", &num);
    num_end = num + 10;

    while(num<=num_end){
        printf("%d\n", num);
        num++;
    }
}