#include <stdio.h>
long fact(int n);
long rfact(int n);

int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit).\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative numbers, please.\n");
        else if (num > 12)
            printf("Keep input under 13.\n");
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit)\n");
    }
    printf("Bye!\n");

    return 0;
}

long fact(int num)
{
    long ans = 1;
    while (num > 1)
    {
        ans *= num;
        num--;
    }
    return ans;
}

long rfact(int num)
{
    if (num > 1)
        return num * rfact(num - 1);
    else
        return 1;
}