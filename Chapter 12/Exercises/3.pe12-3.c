#include <stdio.h>

int get_mode(int mode);
double get_info(int mode);
void show_info(double consume, int mode);

int main(void)
{
    int mode=0;
    double consume;
    
    while((mode = get_mode(mode))>=0)
    {
        consume = get_info(mode);
        show_info(consume, mode);
    }
    printf("Done.\n");
    
    return 0;
}

int get_mode(int mode)
{
    int new_mode;
    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &new_mode);
    if(new_mode<=1)
        mode = new_mode;
    else
        printf("Invalid mode specified. Mode %s used.\n",
        mode?"1(US)":"2(metric)");
    return mode;
}

double get_info(int mode)
{
    double distance, fuel, consume;
    printf("Enter distance traveled in %s: ",
           mode ? "miles" : "kilometers");
    scanf("%lf", &distance);
    printf("Enter fuel consumed in %s: ",
           mode ? "gallons" : "liters");
    scanf("%lf", &fuel);
    consume = mode?(distance/fuel):(fuel/distance*100);
    return consume;
}

void show_info(double consume, int mode)
{
    if (mode)
        printf("Fuel consumption is %.1f miles per gallon.\n",
               consume);
    else
        printf("Fuel consumption is %.2f liters per 100 km.\n",
                consume);
}