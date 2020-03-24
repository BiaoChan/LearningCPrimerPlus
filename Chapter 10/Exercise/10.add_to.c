#include <stdio.h>

void add_to(int *tar, int *sou1, int *sou2, int n);

int main(void)
{
    int arr1[4] = {2, 4, 5, 8};
    int arr2[4] = {1, 0, 4, 6};
    int arr3[4], i;

    add_to(arr3, arr1, arr2, 4);

    for(i=0; i<4; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    
    return 0;
}

void add_to(int *tar, int *sou1, int *sou2, int n)
{
    int i;
    for(i=0; i<n; i++)
        tar[i] = sou1[i] + sou2[i];
}