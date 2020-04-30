#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 256

int main(void)
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    printf("Please input source file's name: ");
    scanf("%s", name);

    if((in=fopen(name, "r"))==NULL)
    {
        fprintf(stderr, "Could not open the file \"%s\"\n", name);
        exit(EXIT_FAILURE);
    }

    strcat(name, ".red");

    if((out=fopen(name, "w"))==NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }

    while((ch=getc(in))!=EOF)
    {
        if(count++%3==0)
            putc(ch, out);
    }

    if(fclose(in)!=0 || fclose(out)!=0)
        fprintf(stderr, "Error in closing files\n");
    
    return 0;
}