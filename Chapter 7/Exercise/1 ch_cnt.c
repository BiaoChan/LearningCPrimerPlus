#include <stdio.h>

int main(void)
{
    char ch;
    int sp_cnt, lf_cnt, o_cnt;
    sp_cnt = lf_cnt = o_cnt = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            sp_cnt++;
        else if (ch == '\n')
            lf_cnt++;
        else
            o_cnt++;
    }

    printf("space character: %d\nline feed:%d\nother character:%d\n",
           sp_cnt, lf_cnt, o_cnt);

    return 0;
}