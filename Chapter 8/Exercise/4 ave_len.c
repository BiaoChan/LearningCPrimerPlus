#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    char ch, ch_prev;
    int words = 0;
    long characters = 0;
    bool eof = false;
    double aver_len;

    while (!eof)
    {
        while (!eof && !isalpha(ch = getchar()) && ch != EOF)
            continue;
        if (ch == EOF)
            eof = true;
        else
        {
            words++;
            characters++;
        }
        while (!eof && isalpha(ch = getchar()) && ch != EOF)
            characters++;
        eof = (ch == EOF) ? true : false;
    }
    aver_len = (double)characters/words;
    printf("words:%d, characters:%ld\n", words, characters);
    printf("average length:%.2f\n", aver_len);

}