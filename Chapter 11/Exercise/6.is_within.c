#include <stdio.h>

int is_within(char *str, char ch);

int main(void)
{
    char *str = "hello, how are you? I'm fine.";
    char ch;
    while((ch=getchar())!='\n')
    {
        if(is_within(str, ch))
            printf("%c is in the string.\n", ch);
        else
            printf("%c is not in the string.\n", ch);
        getchar();
    }
    
    return 0;
}

int is_within(char *str, char ch)
{
    while(*str && *str!=ch)
        str++;
    return *str;
}