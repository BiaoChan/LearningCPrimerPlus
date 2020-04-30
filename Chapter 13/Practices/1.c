#include <stdio.h>

int main(void)
{
    int ch;
    unsigned long count = 0;
    while ((ch = getchar()) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    printf("%d characters has been inputted.\n", count);

    return 0;
}
