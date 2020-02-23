#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    char ch;
    while ((ch = get_first()) != 'q')
        if (ch)
            printf("%c\n", ch);

    return 0;
}

char get_first(void)
{
    int ch;
    while (isblank(ch = getchar()))
        printf("%c:%d\n", ch, ch);
    if (ch == '\n')
        return '\0';
    while (getchar() != '\n')
        continue;
    return ch;
}