#include <stdio.h>

int main(void)
{
    char ch;
    int replaced = 0;
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            replaced++;
            printf("!");
        }
        else if(ch=='!')
        {
            replaced++;
            printf("!!");
        }
        else 
            putchar(ch);
    }
    printf("%d character has been replaced.\n", replaced);
    
    return 0;
}