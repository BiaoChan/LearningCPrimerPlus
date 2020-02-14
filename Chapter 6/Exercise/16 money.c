#include <stdio.h>

int main(void)
{
    double Daphne, Deirdre;
    int years=0;
    Daphne = Deirdre = 100;
    do
    {
        Daphne += 100*0.1;
        Deirdre *= 1.05;
        years++;
    } while (Deirdre<=Daphne);
    printf("It takes %d years that Geirdre win Daphne.\n", years);
    
    return 0;    
}