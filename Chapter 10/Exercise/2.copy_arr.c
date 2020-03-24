#include <stdio.h>
#define SIZE 5

void print_arr(double *ptr, int n);
void copy_arr(double target[], double source[], int n);
void copy_ptr(double *ptarget, double *psource, int n);
void copy_ptrs(double *ptarget, double *psource, double *psource_end);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];
    copy_arr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3, source, source + SIZE);
    print_arr(source, SIZE);
    print_arr(target1, SIZE);
    print_arr(target2, SIZE);
    print_arr(target3, SIZE);
    return 0;
}

void print_arr(double *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%.2f ", *(ptr + i));
    printf("\n");
}

void copy_arr(double target[], double source[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double *ptarget, double *psource, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(ptarget + i) = *(psource + i);
}

void copy_ptrs(double *ptarget, double *psource, double *psource_end)
{
    while (psource < psource_end)
    {
        *ptarget++ = *psource++;
    }
}