#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int in_word = 0;
    char ch;
    int word, lower, upper, number, punct;
    word = lower = upper = number = punct = 0;
    while((ch=getchar())!=EOF)
    {
        lower += islower(ch)?1:0;
        upper += isupper(ch)?1:0;
        number += isdigit(ch)?1:0;
        punct += ispunct(ch)?1:0;
        if(isalpha(ch)&&!in_word)
        {
            word++;
            in_word = 1;
        }
        if(!isalpha(ch)&&in_word)
            in_word = 0;
    }
    printf("%3d words\n%3d lowercases\n", word, lower);
    printf("%3d uppercases\n%3d digits\n", upper, number);
    printf("%3d punctuations\n", punct);
    
    return 0;
}