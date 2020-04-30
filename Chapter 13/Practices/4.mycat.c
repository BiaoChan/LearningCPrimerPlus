#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char ch;
    int i;
    FILE *fp;
    for(i=1; i<argc; i++)
    {
        if((fp = fopen(argv[i], "r"))==NULL)
        {
            printf("file %s open failed.\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        while((ch=fgetc(fp))!=EOF)
        {
            putchar(ch);
        }
        fclose(fp);
    }
    
    return 0;
}