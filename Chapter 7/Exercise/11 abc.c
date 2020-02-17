#include <stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09

int main(void)
{
    double w_a, w_b, w_c, weight;
    double p_a, p_b, p_c;
    double p_amount, w_amount;
    double discount, freight, charge;
    char kase;
    charge = 0;
    w_amount = w_a = w_b = w_c = 0;
    p_amount = p_a = p_b = p_c = 0;

    printf("Please select an option:\na. artichoke $%.2f/pound\n"
           "b. beet $%.2f/pound\nc. carrot $%.2f/pound\n"
           "q. finish order\n",
           ARTICHOKE, BEET, CARROT);
    while (scanf("%c", &kase) == 1)
    {
        while (kase == '\n')
            kase = getchar();

        switch (kase)
        {
        case 'a':
            printf("Enter weight(pound):");
            scanf("%lf", &weight);
            w_a += weight;
            p_a = ARTICHOKE * w_a;
            break;
        case 'b':
            printf("Enter weight(pound):");
            scanf("%lf", &weight);
            w_b += weight;
            p_b = BEET * w_b;
            break;
        case 'c':
            printf("Enter weight(pound):");
            scanf("%lf", &weight);
            w_c += weight;
            p_c = CARROT * w_c;
            break;
        case 'q':
            printf("order finished!\n");
            return 0;
        default:
            break;
        }
        p_amount = p_a + p_b + p_c;
        w_amount = w_a + w_b + w_c;
        discount = p_amount >= 100 ? (0.05 * p_amount) : 0;
        if (w_amount <= 5)
            freight = 6.5;
        else if (w_amount <= 20)
            freight = 14;
        else
        {
            freight = 14 + ((int)(w_amount - 20)) * 0.5;
            if ((w_amount - (int)w_amount) > 0.01)
                freight += 0.5;
        }
        charge = p_amount - discount + freight;

        printf("\nOrder List:\n"
               "%.2f pound artichoke for $%.2f\n"
               "%.2f pound beet for $%.2f\n"
               "%.2f pound carrot for $%.2f\n"
               "weight: %.2fpound\nprice: $%.2f\n"
               "discount: $%.2f\nfreight: $%.2f\n"
               "charge: $%.2f\n\n",
               w_a, p_a, w_b, p_b, w_c, p_c,
               w_amount, p_amount, discount, freight, charge);

        printf("Please select an option:\na. artichoke $%.2f/pound\n"
               "b. beet $%.2f/pound\nc. carrot $%.2f/pound\n"
               "q. finish order\n",
               ARTICHOKE, BEET, CARROT);
    }

    return 0;
}