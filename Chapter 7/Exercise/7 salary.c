#include <stdio.h>
#define TEX_300 (300*0.15)
#define TEX_450 (TEX_300 + 150*0.2)
#define SALARY_HOUR 10

int main(void)
{
    double work_time;
    double salary, tex, income;
    printf("Enter your working time of the week:");
    scanf("%lf", &work_time);
    salary = SALARY_HOUR*(work_time>40?(40+(work_time-40)*1.5):work_time);
    if(salary>=450)
        tex = TEX_450+(salary-450)*0.25;
    else if(salary>=300)
        tex = TEX_300+(salary-300)*0.2;
    else 
        tex = salary*0.15;
    income = salary - tex;

    printf("salary amount:%.2f\ntex:%.2f\nincome:%.2f\n",
        salary, tex, income);
    
    return 0;
}