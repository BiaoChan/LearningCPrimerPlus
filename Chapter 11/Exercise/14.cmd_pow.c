#include <stdio.h>
#include <stdlib.h>

double pow(double x, int y);

int main(int argc, char *argv[])
{
    double x;
    int y;
    int enter_flag = 0;
    char *epx, *epy;
    if(argc<2)
        enter_flag = 1;
    else
    {
        x = strtof(argv[1], &epx);
        y = strtod(argv[2], &epy);
        if(*epx=='\0'&&*epy=='\0')
            printf("%.2f\n", pow(x, y));
        else
        {
            enter_flag = 1;
            if(*epx!='\0')
                printf("\'%s\'is not a double number.\n", argv[1]);
            if(*epy!='\0')
                printf("\'%s\'is not a int number.\n", argv[2]);

            
        }
        
    }
    if(enter_flag)
    {
        printf("Please enter double x and int y:\n");
        scanf("%lf %d", &x, &y);
        printf("x^y = %.4f\n", pow(x, y));
    }
    
    return 0;
}


double pow(double x, int y)
{
    double result = 1;
    while(y--)
        result *= x;
    return result;
}