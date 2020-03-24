#include <stdio.h>

double max_arr(double arr[], int n);
double diff_max_min(double arr[], int n);

int main(void)
{
    double arr[5] = {1.2, 5.5, 3.4, 6.4, 65.1};
    printf("The max num of arr is %.2f.\n", max_arr(arr, 5));
    printf("The difference between the max and the min is %.2f.\n", diff_max_min(arr, 5));
    return 0;
}

double max_arr(double arr[], int n)
{
    double max = arr[0];
    int i;
    for(i=1; i<n; i++)
        max = max>arr[i]?max:arr[i];
    return max;
}

double diff_max_min(double arr[], int n)
{
    double max, min;
    int i;
    max = min = arr[0];
    for(i=1; i<n; i++)
    {
        max = max>arr[i]?max:arr[i];
        min = min<arr[i]?min:arr[i];
    }
    return max-min;
}