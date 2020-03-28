#include <stdio.h>

char *string_in(const char *st1, const char *st2);

int main(void)
{
    char *st1 = "hello, world, how are you?";
    char st2[20];
    char *find;
    while(scanf("%s", st2)==1)
    {
        if((find = string_in(st1, st2))!=NULL)
            printf("%s is in st1:%s\n", st2, find);
        else
            printf("%s is not in the st1\n");
    }
    
    return 0;
}

char *string_in(const char *st1, const char *st2)
{
    int i;
    while(*st1)
    {
        for(i=0; *(st1+i)==*(st2+i)&&*(st2+i)!='\0'; i++)
            continue;
        if(*(st2+i)=='\0')
            return st1;
        st1++;
    }
    return NULL;
}