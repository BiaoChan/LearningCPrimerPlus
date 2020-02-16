#include <stdio.h>

int main(void)
{
    char ch;
    int replaced = 0;
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
            case '.':
                replaced++;
                printf("!");
                break;
            case '!':
                replaced++;
                printf("!!");
                break;
            default:
                putchar(ch);
        }
    }
    printf("%d character has been replaced.\n", replaced);
    
    return 0;
}