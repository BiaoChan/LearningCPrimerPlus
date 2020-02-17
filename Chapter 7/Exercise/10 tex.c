#include <stdio.h>
#define NORMAL_RATE 0.15
#define OVER_RATE 0.28
#define SINGLE 17850
#define HOUSEHOLDER 23900
#define MARRIED 29750
#define DIVORCED 14876

int main(void)
{
    int kase, tex_level;
    double salary, tex;
    printf("Please select your inform:\n"
           "1. single.\n2. householder.\n"
           "3. married.\n4. divorced.\n"
           "5. exit.\n");
    while(scanf("%d", &kase))
    {
        switch (kase)
        {
        case 1:
            tex_level = SINGLE;
            break;
        case 2:
            tex_level = HOUSEHOLDER;
            break;
        case 3:
            tex_level = MARRIED;
            break;
        case 4:
            tex_level = DIVORCED;
            break;
        case 5:
        default:
            printf("exit.\n");
            return 0;
        }
        printf("Enter your salary:");
        scanf("%lf", &salary);
        if(salary>tex_level)
            tex = tex_level * NORMAL_RATE + (salary-tex_level)*OVER_RATE;
        else 
            tex = salary * NORMAL_RATE;
        printf("%.2f salary should be charge %.2f tex.\n", salary, tex);
        printf("Please select your inform:\n"
           "1. single.\n2. householder.\n"
           "3. married.\n4. divorced.\n"
           "5. exit.\n");
    }
    
    return 0;
}