#include <stdio.h>

void copy_var(int rows, int cols, double[rows][cols], double [rows][cols]);

int main(void)
{
    double arr2d[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11, 12, 13, 14, 15}
    };
    double arr2d2[3][5];
    int i, j;
    copy_var(3, 5, arr2d2, arr2d);

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
            printf("%.2f ", arr2d2[i][j]);
        printf("\n");
    }
    
    return 0;
}

void copy_var(int rows, int cols, double target[rows][cols], double source[rows][cols])
{
    int r, c;
    for(r=0; r<rows; r++)
        for(c=0; c<cols; c++)
            target[r][c] = source[r][c];
}
