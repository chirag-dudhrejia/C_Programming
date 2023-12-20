#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter The number here to get Sum of its digits : ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum = sum + (num%10);
        num = num / 10;
    }

    printf("sum of Digits Is %d", sum);   

    return 0;
}