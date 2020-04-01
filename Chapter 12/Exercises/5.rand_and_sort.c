#include <stdio.h>
#include <stdlib.h>

void get_randints(int arr[], int limit, int n);
void sort_less(int arr[], int n);

int main(void)
{
    int arr[100];
    srand(time(0));
    get_randints(arr, 10, 100);
    sort_less(arr, 100);
    for(int i=0; i<100; i++)
        printf("%d\n", arr[i]);
    
    return 0;
}

void get_randints(int arr[], int limit, int n)
{
    for(int i=0; i<n; i++)
        arr[i] = rand()%limit + 1;
}

void sort_less(int arr[], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}