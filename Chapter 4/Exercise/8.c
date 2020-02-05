#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609

int main(void)
{
    float mileage, consumption, rate;
    printf("Please enter mileage(mile) and oil consumption(gallon)\n");
    scanf("%f %f", &mileage, &consumption);
    printf("%.1 fmile/gallon equal to %.1 flitre/100km\n", mileage/consumption, 
        consumption*GALLON_TO_LITRE/(mileage*MILE_TO_KM)*100);
    
    return 0;
}