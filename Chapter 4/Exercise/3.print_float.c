#include <stdio.h>

int main(void)
{
    float f;
    scanf("%f", &f);
    printf("a. The input is %.1f or %.1e.\n", f, f);
    printf("b. The input is %+2.3f or %.3E.\n", f, f);
    
    return 0;    
}