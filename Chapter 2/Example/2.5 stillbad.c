/*stillbad.c -- only fixd grammer*/
#include <stdio.h>

int main(void)
{
    int n, n2, n3;

    /*This program has some error*/
    n = 5;
    n2 = n*n;
    n3 = n2*n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}