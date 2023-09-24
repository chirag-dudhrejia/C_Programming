#include <stdio.h>

int main()
{
    int income, tax;

    printf("Enter Yor Income To caculate Tax : ");
    scanf("%d", &income);

    if (income < 100000)
    {
        printf("\nYour Taxable Amount is NIL\n");
    }
    else if (income < 200000)
    {
        tax = (income -100000) * 0.1;
        printf("\nYour Taxable Amount Is %d\n", tax);
    }
    else
    {
        tax = income * 0.2;
        printf("\nYour Taxable Amount Is %d\n", tax);
    }
    

    return 0;
}