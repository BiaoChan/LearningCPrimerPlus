#include <stdio.h>

void re_sort(double *p, int n);
void print_ar(double *p, int n);

int main(void)
{
    double arr[10] = {2.0, 2.7, 3, 9.2, 0, 2.3, 8, 3.5, -1, 2.5};
    print_ar(arr, 10);
    re_sort(arr, 10);
    print_ar(arr, 10);
    
    return 0;
}

void re_sort(double *p, int n)
{
    int i, j;
    double t;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(p[j]<p[j+1])
            {
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }
}

void print_ar(double *p, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%.2f ", p[i]);
    printf("\n");
}