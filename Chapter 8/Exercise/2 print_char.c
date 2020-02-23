#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
            printf("\'\\n\':%d ", ch, ch);
        else if(ch=='\t')
            printf("\'\\t\':%d ", ch, ch);
        else if(ch==30)
            printf("\'^6\':%d ", ch, ch);
        else if(ch>=1 && ch<=31)
            printf("\'^%c\':%d ", ch+64, ch);
        else
            printf("\'%c\':%d ", ch, ch);

        if(++count%10==0)
            printf("\n");
    }
    return 0;
}