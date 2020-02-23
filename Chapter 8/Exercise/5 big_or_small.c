#include <stdio.h>

int main(void)
{
    int u_lim, l_lim, guess;
    char ch = '\n';
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right.\n");
    printf("'y' for right guess, 'b' for bigger, 's' for smaller.\n");
    printf("Please give me two numbers as the upper and lower limit.\n");
    scanf("%d %d", &u_lim, &l_lim);
    getchar();
    guess = (u_lim + l_lim) / 2;
    printf("Is the number %d? Is it bigger or smaller?\n", guess);
    while ((ch = getchar()) && ch != 'y')
    {
        if (ch == 'b')
            u_lim = guess - 1;
        else if (ch == 's')
            l_lim = guess + 1;
        else
            printf("I can't understand what you mean.\n");
        guess = (u_lim + l_lim) / 2;
        printf("Is the number %d? Is it bigger or smaller?\n", guess);
        while(getchar()!='\n')
            continue;
    }
    printf("I knew it.\n");
}