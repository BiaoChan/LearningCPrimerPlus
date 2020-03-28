#include <stdio.h>

char * getnchar(char *st, int n);

int main(void)
{
    char str[20];
    getnchar(str, 10);
    str[10] = '\0';
    puts(str);   

    return 0;
}



char * getnchar(char *st, int n)
{
    int i;
    for(i=0; i<n; i++)
        st[i] = getchar();
    return st;
}