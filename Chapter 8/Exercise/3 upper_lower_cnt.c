#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int upper_cnt, lower_cnt, ch;
    upper_cnt = lower_cnt = 0;
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper_cnt++;
        else if (islower(ch))
            lower_cnt++;
    }
    printf("upper case: %d\n", upper_cnt);
    printf("lower case: %d\n", lower_cnt);
    printf("alpha: %d\n", lower_cnt + upper_cnt);
    return 0;
}