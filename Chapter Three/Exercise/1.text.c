#include <stdio.h>

int main(void)
{
    int i;
    float f;

    i =65536/2*65536-1;
    printf("%d\n", i);
    i++;
    printf("%d\n", i);
    printf("\n");

    f = 1e38;
    printf("%e\n", f);
    f *= 10;
    printf("%e\n", f);
    printf("\n");

    f = 1e-45;
    printf("%e\n", f);
    f /= 10;
    printf("%e\n", f);

    
    return 0;
}