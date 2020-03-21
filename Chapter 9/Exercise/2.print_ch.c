#include <stdio.h>

void chline(char ch, int lines, int columns);

int main(void)
{
    char ch;
    int line, column;
    printf("Enter a char: ");
    scanf("%c", &ch);
    printf("Enter two num to print lines and columns:");
    scanf("%d %d", &line, &column);
    chline(ch, line, column);
    return 0;
}

void chline(char ch, int lines, int columns)
{
    int i, j;
    for(i=1; i<=lines; i++)
    {
        for(j=1; j<=columns; j++)
            putchar(ch);
        putchar('\n');
    }
}