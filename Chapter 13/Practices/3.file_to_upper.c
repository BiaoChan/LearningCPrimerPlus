#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char filename[256], ch;
    FILE *fp, *fp_upper;

    printf("Please input filename:");
    scanf("%s", filename);

    if((fp = fopen(filename, "r"))==NULL)
    {
        printf("file %s open failed.\n", filename);
        exit(EXIT_FAILURE);
    }

    strcat(filename, ".toupper");
    if((fp_upper = fopen(filename, "w"))==NULL)
    {
        printf("file %s create failed.\n", filename);
        exit(EXIT_FAILURE);
    }

    while((ch=fgetc(fp))!=EOF)
    {
        fputc(toupper(ch), fp_upper);
    }
    
    fclose(fp);
    fclose(fp_upper);
    
    return 0;
}