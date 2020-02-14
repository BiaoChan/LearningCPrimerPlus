#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40];
    int index;
    printf("Enter a word:");
    scanf("%s", str);
    for(index=strlen(str)-1; index>=0; index--)
        printf("%c", str[index]);
    printf("\n");
    
    return 0;
}