#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'u' && argv[1][2] == '\0')
            putchar(toupper(ch));
        else if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'l' && argv[1][2] == '\0')
            putchar(tolower(ch));
        else
            putchar(ch);
    }
    putchar('\n');

    return 0;
}
