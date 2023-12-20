#include <stdio.h>

long power(int a, int pow)
{
    if (pow > 0)
    {
        return (a *power(a , pow -1));
    }

    return 1;
}

int main ()
{
    int num, pow; 
    long result;

    printf("Enter Number Here : ");
    scanf("%d", &num);

    printf("Enter Power Here : ");
    scanf("%d", &pow);

    result = power(num , pow);
    printf("Result Is : %d", result);

    return 0;
}