#include <stdio.h>
#include <stdlib.h>

int count_ch(FILE *fp, char ch);

int main(int argc, char *argv[])
{
    char ch;
    FILE *fp;
    if(argc<2)
    {
        printf("Usage: %s char [file1 file2 file3 ...]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];

    if(argc==2)
    {
        printf("%d %c has been inputted.\n", count_ch(stdin, ch), ch);
    }   

    for(int i=2; i<argc; i++)
    {
        if((fp = fopen(argv[i], "r"))==NULL)
        {
            printf("file %s open failed.\n", argv[i]);
        }
        else
        {
            printf("file %s has %d %c.\n", argv[i], count_ch(fp, ch), ch);
            fclose(fp);
        }
    }
    
    return 0;
}

int count_ch(FILE *fp, char ch)
{
    int count = 0;
    char ch_c;
    while((ch_c=fgetc(fp))!=EOF)
    {
        if(ch_c==ch)
            count++;
    }
    return count;
}