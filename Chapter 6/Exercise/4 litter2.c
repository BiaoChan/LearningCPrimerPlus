#include <stdio.h>
#define LINES 6

int main(void)
{
    int i, j;
    char ch = 'A';
    for(i=0; i<LINES; i++)
    {
        for(j=0; j<=i; j++)
            printf("%c", ch++);
        printf("\n");
    }
    
    return 0;
}