#include <stdio.h>

char *mystrncpy(char *s1, char *s2, int n);

int main(void)
{
    char s1[20], s2[20];
    while(scanf("%s", s2)==1)
    {
        mystrncpy(s1, s2, 9);
        s1[9] = '\0';
        puts(s1);
    }
    
    return 0;
}

char *mystrncpy(char *s1, char *s2, int n)
{
    int i;
    for(i=0; i<n&&s2[i]; i++)
        s1[i] = s2[i];
    if(i!=n)
        s1[i] = '\0';
    return s1;
}