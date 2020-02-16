#include <stdio.h>

int main(void)
{
    char ch, prev_ch = '\n';
    int ei_cnt = 0;

    while((ch=getchar())!='#')
    {
        if(ch=='i' && prev_ch == 'e')
            ei_cnt++;
        prev_ch = ch;
    }
    printf("ei:%d\n", ei_cnt);
    
    return 0;
}