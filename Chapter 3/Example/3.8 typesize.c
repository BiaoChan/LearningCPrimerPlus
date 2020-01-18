#include <stdio.h>

int main(void)
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type int double a size of %zd bytes.\n", sizeof(double));
    printf("Type int long double a size of %zd bytes.\n", sizeof(long double));
    return 0;
}
