#include <stdio.h>
#include "2.pe12-2a.h"

void set_mode(int mode_new)
{
    if(mode_new==0 || mode_new==1)
        mode = mode_new;
    else
        printf("Invalid mode specified. Mode %s used.\n",
        mode?"1(US)":"2(metric)");
}

void get_info(void)
{
    printf("Enter distance traveled in %s: ",
           mode ? "miles" : "kilometers");
    scanf("%lf", &distance);
    printf("Enter fuel consumed in %s: ",
           mode ? "gallons" : "liters");
    scanf("%lf", &fuel);
}

void show_info(void)
{
    if (mode)
        printf("Fuel consumption is %.1f miles per gallon.\n",
               distance / fuel);
    else
        printf("Fuel consumption is %.2f liters per 100 km.\n",
                fuel/distance*100);
}