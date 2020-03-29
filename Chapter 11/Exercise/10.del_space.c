#include <stdio.h>

void del_space(char *str);
char * s_gets(char *st, int n);

int main(void)
{
    char str[40];
    while(s_gets(str, 39)!=NULL)
    {
        del_space(str);
        printf("after del spaces:\n%s\n", str);
    }
    return 0;
}

void del_space(char *str)
{
    char *ps = str;
    while(*str)
    {
        if(*str!=' ')
            *ps++ = *str;
        str++;
    }
    *ps = '\0';
}

char * s_gets(char *st, int n)
{
    char *ret_val;
    int i=0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(st[i]!='\n' && st[i]!='\0')
            i++;
        if(st[i]=='\n')
            st[i] = '\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;
}