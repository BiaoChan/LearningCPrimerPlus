#include <stdio.h>

int main(void)
{
    int c;
    printf("Please input a ascii code:");
    scanf("%d", &c);
    printf("The ascii code %d present for char %c\n", c, c);
    
    return 0;
}