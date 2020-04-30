#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    int file1_eof, file2_eof;
    char ch;
    int char_cnt;
    file1_eof = file2_eof = 0;
    if(argc!=3)
    {
        printf("Usage: %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp1 = fopen(argv[1], "r"))==NULL)
    {
        printf("Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fp2 = fopen(argv[2], "r"))==NULL)
    {
        printf("Can't open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while(!(file1_eof&&file2_eof))
    {
        char_cnt = 0;
        while(!file1_eof)
        {
            ch = fgetc(fp1);
            if(ch==EOF)
            {
                file1_eof = 1;
                if(char_cnt!=0)
                    putchar('\n');
                break;
            }
            putchar(ch);
            char_cnt++;
            if(ch=='\n')
                break;
        }
        char_cnt = 0;
        while(!file2_eof)
        {
            ch = fgetc(fp2);
            if(ch==EOF)
            {
                file2_eof = 1;
                if(char_cnt!=0)
                    putchar('\n');
                break;
            }
            putchar(ch);
            char_cnt++;
            if(ch=='\n')
                break;
        }

    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}