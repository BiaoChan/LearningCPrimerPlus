#include <stdio.h>
#define CM_PER_INCH 2.54
int main(void)
{
    float height, inches;
    int feet;
    printf("Enter a height in centmeters:");
    scanf("%f", &height);
    while(height>0)
    {
        inches = height / CM_PER_INCH;
        feet = (int)inches/12;
        inches = inches - 12*feet;
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
        printf("Enter a height in centeimeters(<=0 to quit):");
        scanf("%f", &height);
    }
    printf("bye\n");
    
    return 0;
}