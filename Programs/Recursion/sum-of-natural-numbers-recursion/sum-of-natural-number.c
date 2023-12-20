#include <stdio.h>

int sum( int num)
{
    if (num == 0)
    {
        return num;
    }
    else
    {
       return num + sum(num - 1);
    }
    
}

int main()
{
    int num;

    printf("Enter The Number Till You Want Sum Of Natural Number: ");
    scanf("%d", &num);
    printf("\n");

    printf("The sum of first %d natural numbers is : %d", num, sum(num));
    printf("\n\n");

    return 0;
}