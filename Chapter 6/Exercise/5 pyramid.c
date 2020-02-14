#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;
    printf("Please enter a upper case letter:");
    scanf("%c", &ch);
    for(i=0; 'A'+i<=ch; i++)
    {
        for(j=ch-'A'-i; j>0; j--)
            printf(" ");
        for(j=0; j<=i; j++)
            printf("%c", 'A'+j);
        for(j=i-1; j>=0; j--)
            printf("%c", 'A'+j);
        printf("\n");
    }
    
    return 0;
}