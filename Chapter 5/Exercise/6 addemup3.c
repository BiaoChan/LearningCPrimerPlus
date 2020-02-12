#include <stdio.h>

int main(void)
{
    int count, sum;
    sum = 0;
    printf("Enter a num:");
    scanf("%d", &count);
    while(count){
        sum += count * count;
        count--;
    }
    printf("%d\n", sum);
    
    return 0;
}