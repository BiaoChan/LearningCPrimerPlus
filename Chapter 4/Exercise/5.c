#include <stdio.h>

int main(void)
{
    float speed, file_size, remaining;
    printf("Please input your download speed(Mb/s):");
    scanf("%f", &speed);
    printf("Please enter file size(MB):");
    scanf("%f", &file_size);
    remaining = file_size/(speed/8);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, file_size);
    printf("downloads in %.2f seconds.\n", remaining);
    
    return 0;   
}