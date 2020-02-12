#include <stdio.h>

int main(void)
{
    int count, sum;
    sum = 0;
    printf("Enter a num to add emup:");
    scanf("%d", &count);
    while(count){
        sum += count;
        count--;
    }
    printf("%d\n", sum);
    
    return 0;
}