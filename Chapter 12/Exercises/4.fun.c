#include <stdio.h>

int func(void);

int main(void)
{
    for(int i=0; i<100; i++)
        printf("The func has been called %d times.\n", func());
    
    return 0;
}

int func(void)
{
    static int times = 0;
    return ++times;
}