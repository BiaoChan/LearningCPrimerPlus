#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp_sour, *fp_dist;
    char ch;
    if(argc!=3)
    {
        printf("Usage: %s source_file dist_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp_dist = fopen(argv[2], "w"))==NULL)
    {
        printf("create file %s failed.\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    if((fp_sour = fopen(argv[1], "r"))==NULL)
    {
        printf("open file %s failed.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while((ch=fgetc(fp_sour))!=EOF)
    {
        fputc(ch, fp_dist);
    }

    fclose(fp_sour);
    fclose(fp_dist);
    
    return 0;
}