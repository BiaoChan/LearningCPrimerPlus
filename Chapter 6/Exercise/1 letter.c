#include <stdio.h>

int main(void)
{
    char letter[26];
    int index;

    for(index=0; index<26; index++)
        letter[index] = 'a' + index;
    for(index=0; index<26; index++)
        printf("%c", letter[index]);
    printf("\n");
    
    return 0;
}