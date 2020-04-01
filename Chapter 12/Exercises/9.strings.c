#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int str_num;
    char **strings;
    char temp[100];

    printf("How many words do you wish to enter? ");
    scanf("%d", &str_num);
    strings = (char**)malloc(str_num*sizeof(char*));
    printf("Enter %d words now:\n", str_num);
    for(int i=0; i<str_num; i++)
    {
        scanf("%s", temp);
        strings[i] = (char*)malloc(strlen(temp)+1);
        strcpy(strings[i], temp);
    }
    printf("Here are your words:\n");
    for(int i=0; i<str_num; i++)
        printf("%s\n", strings[i]);
    
    for(int i=0; i<str_num; i++)
        free(strings[i]);
    free(strings);
    
    return 0;
}