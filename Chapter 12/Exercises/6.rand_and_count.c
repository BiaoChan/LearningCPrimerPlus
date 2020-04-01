#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long n;
    long count[10] = {};
    srand(time(0));

    scanf("%ld", &n);
    for(long i=0; i<n; i++)
        count[rand()%10]++;
    for(int i=0; i<10; i++)
        printf("%d:%ld\n", i+1, count[i]);

    return 0;
}