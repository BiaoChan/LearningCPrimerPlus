#include <stdio.h>

int main(void)
{
    int flag[10000], n, i, j;
    while(scanf("%d", &n)==1 && n>0)
    {
        for(i=2; i<=n; i++)
            flag[i] = 1;
        for(i=2; i<=n; i++)
        {
            if(flag[i])
            {
                for(j=2; j*i<=n; j++)
                {
                    flag[j*i] = 0;
                }
                printf("%d ", i);
            }
        }
        printf("\n");
    }



    return 0;
}