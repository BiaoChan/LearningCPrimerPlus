#include <stdio.h>

int main(void)
{
    int age, lived_days;

    age = 21;
    lived_days = 21*365;

    printf("You have lived at least %d days in %d years\n", lived_days, age);
    
    return 0;
}