#include <stdio.h>

void str_reverse(char *str);

int main(void)
{
    char str[20];
    while(fgets(str, 19, stdin)!=NULL)
    {
        str_reverse(str);
        fputs("reversed:", stdout);
        fputs(str,stdout);
        putchar('\n');
    }
    
    return 0;
}

void str_reverse(char *str)
{
    char temp, *r_str;
    r_str = str;
    while(*r_str)
        r_str++;
    r_str--;
    while(str<r_str)
    {
        temp = *str;
        *str = *r_str;
        *r_str = temp;
        str++;
        r_str--;
    }
}