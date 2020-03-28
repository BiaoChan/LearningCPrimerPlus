#include <stdio.h>

char *getword(char *st, int n);

int main(void)
{
    char word[20];
    getword(word, 19);
    puts(word);
    return 0;
}


char *getword(char *st, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        st[i] = getchar();
        if(st[i]=='\n' || st[i] == ' ' || st[i] == '\t')
            break;
    }
    st[i] = '\0';
    return st;
}