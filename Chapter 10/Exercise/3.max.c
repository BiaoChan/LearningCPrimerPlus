#include <stdio.h>

int max_arr(int arr[], int n);

int main(void)
{
    int arr[5] = {3, 8, 2, 9, 1};
    printf("The max num of arr is %d.\n", max_arr(arr, 5));

    return 0;
}

int max_arr(int arr[], int n)
{
    int max = arr[0];
    int i;
    for(i=1; i<n; i++)
        max = max>arr[i]?max:arr[i];
    return max;
}

    