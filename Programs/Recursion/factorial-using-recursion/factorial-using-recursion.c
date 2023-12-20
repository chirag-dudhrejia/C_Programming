#include <stdio.h>

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
    

    return 0;
}

int main()
{
    int num;

    printf("Enter The Number You Want Factorial Of : ");
    scanf("%d", &num);

    printf("\nFactorial Of %d is : %d", num, fact(num));

    return 0;
}