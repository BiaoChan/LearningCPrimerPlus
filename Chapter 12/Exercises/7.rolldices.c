#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "7.diceroll.h"

int main(void)
{
    int dice, sides, sets;
    int i;

    srand((unsigned int)time(0));

    printf("Enter the number of sets; enter q to stop.\n");
    while(scanf("%d", &sets)==1)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided thriws.\n", sets, dice, sides);
        for(i=0; i<sets; i++)
        {
            printf("%d ", roll_n_dice(dice, sides));
            if(i%15==14)
                printf("\n");
        }
        if(i%15)
            printf("\n");
        printf("How many dets? Enter q to stop.\n");
    }
    
    return 0;
}