#include <stdio.h>

void copy_arr(double target[], double source[], int n);

int main(void)
{
    int i, j;
    double arr2d[3][4] = {
        {1, 2.9, 3.7, 4.9},
        {3.2, 3.4, 5.1, 5.21},
        {5, 0, 3.2, 5}
    };
    double arr2d2[3][4];
    for(i=0; i<3; i++)
        copy_arr(arr2d2[i], arr2d[i], 4);
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%3.2f ", arr2d2[i][j]);
        printf("\n");
    }
    
    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        target[i] = source[i];
}