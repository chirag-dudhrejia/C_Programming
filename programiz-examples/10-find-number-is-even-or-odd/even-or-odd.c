#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter Number to check it is EVEN or ODD : ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("\n%d is an Even Number\n\n", num);
    }
    else
    {
        printf("\n%d is an Odd Number\n\n", num);
    }

    return 0;
}