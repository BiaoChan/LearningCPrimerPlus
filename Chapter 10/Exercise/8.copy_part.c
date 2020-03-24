#include <stdio.h>

void copy_arr(double target[], double source[], int n);

int main(void)
{
    double arr1[7] = {1, 2, 3, 4, 5, 6, 7};
    double arr2[3];
    int i;

    copy_arr(arr2, arr1+2, 3);

    for(i=0; i<3; i++)
        printf("%.2f ", arr2[i]);
    printf("\n");
    
    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        target[i] = source[i];
}