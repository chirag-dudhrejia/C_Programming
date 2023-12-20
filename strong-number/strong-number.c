#include <stdio.h>

// A strong number is a positive integer whose sum of factorials of its digits equals the number itself

int main()
{
    int num, numcopy, rem, fac = 1, result = 0;

    printf("Please Enter Any Number : ");
    scanf("%d", &num);

    numcopy = num;

    while (num != 0)
    {
        rem = num%10;

        for ( rem ; rem >= 1; rem--)
        {
            fac = fac * rem;
        }

        result = result + fac;
        fac = 1;
        num = num/10;
    }

        printf("Result Is : %d", result);

    if (result == numcopy)
    {
        printf("\n%d Is a Strong Number\n", numcopy);
    }
    else
    {
        printf("\n%d Is Not Strong Number\n", numcopy);
    }
    

    return 0;
}