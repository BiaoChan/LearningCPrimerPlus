#include <stdio.h>

int main(void)
{
    char name[40];
    float height;

    printf("Please input your name:");
    scanf("%s", name);
    printf("Please input your height in inches:");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall.\n", name, height);
    
    return 0;
}