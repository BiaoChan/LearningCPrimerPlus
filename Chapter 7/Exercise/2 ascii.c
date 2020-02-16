#include <stdio.h>

int main(void)
{
    char ch;
    int cnt = 0;
    
    while((ch=getchar())!='#')
    {
        printf("%3d ", ch);
        if(++cnt%8==0)
            printf("\n");
    }

    return 0;
}