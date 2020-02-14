#include <stdio.h>
#define MAX 255

int main(void)
{
    char line[MAX], ch;
    int index = 0;
    printf("Please enter a line of sentence:\n");

    while(scanf("%c", &ch)==1 && ch!='\n')
    {
        line[index] = ch;
        index++;
    }
    for(index--; index>=0; index--)
        printf("%c", line[index]);
    printf("\n");
    
    return 0;
}