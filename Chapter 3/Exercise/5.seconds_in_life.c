#include <stdio.h>

int main(void)
{
    int age;
    long long seconds;

    printf("Please input your age:");
    scanf("%d", &age);
    seconds = (long long)31560000*age;
    printf("You have spend about %lld seconds in your life.\n", seconds);

    return 0;
}
