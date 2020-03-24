#include <stdio.h>

void input(int r, int c, double arr[r][c]);
void cal_ave(int r, int c, double arr[r][c], double ave[r]);
double cal_tot_ave(int r, int c, double arr[r][c]);
double cal_max(int r, int c, double arr[r][c]);
void print_result(int r, double ave[r], double tot_ave, double max);

int main(void)
{
    double arr[3][5], ave[3], tot_ave, max;

    input(3, 5, arr);
    cal_ave(3, 5, arr, ave);
    tot_ave = cal_tot_ave(3, 5, arr);
    max = cal_max(3, 5, arr);
    print_result(3, ave, tot_ave, max);

    return 0;
}

void input(int r, int c, double arr[r][c])
{
    int i, j;
    for(i=0; i<r; i++)
    {
        printf("Please enter %d number for row %d:\n", c, i);
        for(j=0; j<c; j++)
            scanf("%lf", &arr[i][j]);
    }
}

void cal_ave(int r, int c, double arr[r][c], double ave[r])
{
    int i, j;
    double tot;
    for(i=0; i<r; i++)
    {
        tot = 0;
        for(j=0; j<c; j++)
            tot += arr[i][j];
        ave[i] = tot/c;
    }
}

double cal_tot_ave(int r, int c, double arr[r][c])
{
    int i, j;
    double tot = 0;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            tot += arr[i][j];
    return tot/i/j;
}

double cal_max(int r, int c, double arr[r][c])
{
    int i, j;
    double max = arr[0][0];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            max = max>arr[i][j]?max:arr[i][j];
    return max;
}

void print_result(int r, double ave[r], double tot_ave, double max)
{
    int i;
    for(i=0; i<r; i++)
        printf("Line %d\'s average: %.2f\n", i+1, ave[i]);
    printf("Total average: %.2f\n", tot_ave);
    printf("Maximum: %.2f\n", max);
}

