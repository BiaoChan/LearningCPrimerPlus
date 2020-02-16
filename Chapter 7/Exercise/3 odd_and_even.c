#include <stdio.h>

int main(void)
{
    int odd_cnt, even_cnt;
    int odd_sum, even_sum;
    int n;
    odd_cnt = even_cnt = 0;
    odd_sum = even_sum = 0;
    while(scanf("%d", &n)==1 && n!=0)
    {
        if(n%2==1){
            odd_cnt++;
            odd_sum += n;
        }
        else{
            even_cnt++;
            even_sum += n;
        }
    }

    printf("odd number: %d, average:%.2f\n", odd_cnt, (double)odd_sum/odd_cnt);
    printf("even number: %d, average:%.2f\n", even_cnt, (double)even_sum/even_cnt);
    return 0;
}