#include <stdio.h>

int main(void)
{
    float height_inch, height_cm;
    printf("Please input your height in inches:");
    scanf("%f", &height_inch);
    height_cm = 2.54*height_inch;
    printf("Your height is %.2fcm.\n", height_cm);

    return 0;
}
