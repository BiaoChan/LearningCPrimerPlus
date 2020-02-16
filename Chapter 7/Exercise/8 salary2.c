#include <stdio.h>
#define TEX_300 (300 * 0.15)
#define TEX_450 (TEX_300 + 150 * 0.2)
#define LEVEL1 8.75
#define LEVEL2 9.33
#define LEVEL3 10.00
#define LEVEL4 11.20

int main(void)
{
    double work_time;
    double salary, tex, income;
    double salary_hour;
    int kase;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                         2) $ 9.33/hr\n");
    printf("3) $10.00/hr                        4) $ 11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");

    scanf("%d", &kase);
    switch(kase)
    {
        case 1:
            salary_hour = LEVEL1;
            break;
        case 2:
            salary_hour = LEVEL2;
            break;
        case 3:
            salary_hour = LEVEL3;
            break;
        case 4:
            salary_hour = LEVEL4;
            break;
        default:
            printf("Parameter error.\n");
        case 5:
            return 0;
    }

    printf("Enter your working time of the week:");
    scanf("%lf", &work_time);
    salary = salary_hour * (work_time > 40 ? (40 + (work_time - 40) * 1.5) : work_time);
    if (salary >= 450)
        tex = TEX_450 + (salary - 450) * 0.25;
    else if (salary >= 300)
        tex = TEX_300 + (salary - 300) * 0.2;
    else
        tex = salary * 0.15;
    income = salary - tex;

    printf("salary amount:%.2f\ntex:%.2f\nincome:%.2f\n",
           salary, tex, income);

    return 0;
}