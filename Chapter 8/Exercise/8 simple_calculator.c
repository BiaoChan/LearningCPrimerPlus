#include <stdio.h>

double getnum(void);

int main(void)
{
    char ch;
    double num1, num2, result;

    do
    {
        printf("Enter the operation of your choice:\n"
               "a. add          s. subtract\n"
               "m. multiply     d. divide\n"
               "q. quit\n");
        ch = getchar();
        if (ch == 'q')
            continue;
        printf("Enter first number: ");
        num1 = getnum();
        printf("enter second number: ");
        num2 = getnum();
        switch (ch)
        {
        case 'a':
            result = num1 + num2;
            ch = '+';
            break;
        case 's':
            result = num1 - num2;
            ch = '-';
            break;
        case 'm':
            result = num1 * num2;
            ch = '*';
            break;
        case 'd':
            while(num2==0)
            {
                printf("The divisor cannot be zero. Please enter another number: ");
                num2 = getnum();
            }
            result = num1 / num2;
            ch = '/';
            break;
        default:
            printf("Invalid option. Quit.\n");
            ch = 'q';
            continue;
        }
        printf("%0g %c %0g = %0g\n", num1, ch, num2, result);
    } while (ch != 'q');
    printf("Bye.\n");

    return 0;
}

double getnum(void)
{
    double num;
    char ch;
    while (scanf("%lf", &num) == 0)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    while (getchar() != '\n')
        continue;
    return num;
}