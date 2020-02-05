#include <stdio.h>

int main(void)
{
    char first_name[20], last_name[20];
    printf("Please enter your first name:");
    scanf("%s", first_name);
    printf("Please enter your last name:");
    scanf("%s", last_name);
    printf("%s,%s\n", last_name, first_name);
    
    return 0;
}