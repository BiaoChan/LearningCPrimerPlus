#include <stdio.h>

int temperatures(double f);

int main(void)
{
    double f;
    printf("Plsase enter a temperature in Fahrenheit:");
    while (scanf("%lf", &f)==1)
    {
        if(!temperatures(f)){
            printf("value error\n");
            break;
        }
        printf("Plsase enter a temperature in Fahrenheit(q to quit):");
    }
    
    
    return 0;
}

int temperatures(double f)
{
    double c, k;
    c = 5.0/9.0*(f-32.0);
    k = c + 273.16;
    if(k<0){
        return 0;
    }
    else{
        printf("%.2f¨H = %.2f¡æ = %.2fK\n", f, c, k);
        return 1;
    }
}

