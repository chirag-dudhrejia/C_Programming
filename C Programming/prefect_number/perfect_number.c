#include <stdio.h>

int main()
{
    int num, sum = 0, rem;

    printf("Enter Number To check Is It Perfect Number Or Not : ");
    scanf("%d", &num);

    for (int i = 1; i <= num/2; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
        
    }

    if (sum == num)
    {
        printf("%d is perfect number\n", num);
    }
    else
    {
        printf("%d is not perfect number\n", num);
    }
    

    return 0;
}