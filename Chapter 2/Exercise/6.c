#include <stdio.h>

int main(void)
{
    int toes, toes_double, toes_square;

    toes = 10;
    toes_double = 2*toes;
    toes_square = toes*toes;

    printf("toes:%d, double toes:%d, square toes:%d\n", toes, toes_double, toes_square);
    
    return 0;
}