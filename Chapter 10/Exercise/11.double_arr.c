#include <stdio.h>

void double_arr(int r, int c, int arr[r][c]);
void print_arr(int r, int c, int arr[r][c]);

int main(void)
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {0, 9, 8, 7, 6}};
    print_arr(3, 5, arr);
    double_arr(3, 5, arr);
    print_arr(3, 5, arr);

    return 0;
}

void double_arr(int r, int c, int arr[r][c])
{
    int i, j;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            arr[i][j]*=2;
}

void print_arr(int r, int c, int arr[r][c])
{
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}