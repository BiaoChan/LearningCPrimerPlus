#include <stdio.h>
#define DUNBAR_NUM 150

int main(void)
{
    int friends = 5;
    int week = 0;
    while(friends<=DUNBAR_NUM)
    {
        week++;
        friends = (friends-week)*2;
    }
    printf("It took %d weeks for Rabnud to make stable friends\n", week);
    
    return 0;
}