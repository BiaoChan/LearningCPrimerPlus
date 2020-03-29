#include <stdio.h>

int atoi(char *str_n);

int main(void)
{
    char st[10];
    while(scanf("%s", st)!=EOF)
        printf("str:%s -> int:%d\n", st, atoi(st));
    
    return 0;
}

int atoi(char *str_n)
{
    int res = 0;
    char *p = str_n;
    while(*p)
    {
        if(*p<'0'||*p>'9')
            return 0;
        res = *p-'0' + res*10;
        p++;
    }
    
    return res;
}