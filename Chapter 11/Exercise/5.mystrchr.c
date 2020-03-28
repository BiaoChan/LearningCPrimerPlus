#include <stdio.h>

char *mystrchr(const char *str, char ch);

int main(void)
{
    char *str = "hello, how are you?";
    char ch;
    char *find;
    while((ch=getchar())!='\n')
    {
        if(find=mystrchr(str, ch))
            puts(find);
        getchar();
    }
    
    return 0;
}

char *mystrchr(const char *str, char ch)
{
    while(*str&&*str!=ch)
        str++;
    if(*str=='\0')
        return NULL;
    else    
        return str;
}