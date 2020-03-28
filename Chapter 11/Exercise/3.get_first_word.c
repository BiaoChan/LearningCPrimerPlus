#include <stdio.h>
#include <ctype.h>

char *get_first_word(char *word);

int main(void)
{
    char word[20];
    if(get_first_word(word))
        puts(word);
    return 0;
}

char *get_first_word(char *word)
{
    char ch;
    int i = 0;
    while(isspace(ch=getchar())&&ch!='\n')
        continue;
    while(!isspace(ch))
    {
        word[i++] = ch;
        ch = getchar();
    }
    word[i] = '\0';
    if(ch!='\n')
        while(getchar()!='\n')
            continue;
    if(i)
        return word;
    else
        return NULL;
}