#include <stdio.h>
#include <string.h>

int menu(void);
int get_strings(char strings[][81]);
char *s_gets(char *st, int n);
void print_strs(char *strings[], int n);
char **ori_order(char strings[][81], char **str_order, int n);
char **ascii_order(char *str_order[], int n);
char **length_order(char *str_order[], int n);
char **first_word_len_order(char *str_order[], int n);
size_t first_word_len(char *);

int main(void)
{
    int kase, str_num;
    char strings[10][81];
    char *str_order[10];

    str_num = get_strings(strings);
    ori_order(strings, str_order, str_num);

    while (kase = menu())
    {
        switch (kase)
        {
        case 1:
            ori_order(strings, str_order, str_num);
            print_strs(str_order, str_num);
            break;
        case 2:
            ascii_order(str_order, str_num);
            print_strs(str_order, str_num);
            break;
        case 3:
            length_order(str_order, str_num);
            print_strs(str_order, str_num);
            break;
        case 4:
            first_word_len_order(str_order, str_num);
            print_strs(str_order, str_num);
            break;
        }
    }
    printf("Bye.\n");
    return 0;
}

int menu(void)
{
    int n;
    printf("Please select one function by enter number:\n");
    printf("1. Print by original order.\n");
    printf("2. Print by ASCII order.\n");
    printf("3. Print by string's length.\n");
    printf("4. print by first word's length.\n");
    printf("0. quit.\n");
    if (scanf("%d", &n) == NULL || n < 0 || n > 4)
        return 0;
    else
        return n;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

void print_strs(char *strings[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        puts(strings[i]);
}
int get_strings(char strings[][81])
{
    int n;
    printf("Please enter 10 strings, end by enter EOF\n");
    for (n = 0; n < 10; n++)
    {
        printf("string %2d: ", n + 1);
        if (s_gets(strings[n], 80) == NULL)
            break;
    }
    printf("%d strings entered.\n", n);
    return n;
}

char **ori_order(char strings[][81], char **str_order, int n)
{
    int i;
    for (i = 0; i < n; i++)
        str_order[i] = strings[i];
}

char **ascii_order(char *str_order[], int n)
{
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strcmp(str_order[j], str_order[j + 1]) > 0)
            {
                temp = str_order[j];
                str_order[j] = str_order[j + 1];
                str_order[j + 1] = temp;
            }
}

char **length_order(char *str_order[], int n)
{
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strlen(str_order[j]) > strlen(str_order[j + 1]))
            {
                temp = str_order[j];
                str_order[j] = str_order[j + 1];
                str_order[j + 1] = temp;
            }
}

size_t first_word_len(char *str)
{
    size_t len = 0;
    while(*str==' ')
        str++;
    while(*str && *str!=' ')
    {
        len++;
        str++;
    }
    return len;
}

char **first_word_len_order(char *str_order[], int n)
{
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (first_word_len(str_order[j]) > first_word_len(str_order[j + 1]))
            {
                temp = str_order[j];
                str_order[j] = str_order[j + 1];
                str_order[j + 1] = temp;
            }
}