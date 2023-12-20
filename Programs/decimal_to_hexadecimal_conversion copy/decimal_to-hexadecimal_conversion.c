#include <stdio.h>

int main()
{
    int num, numcopy, remainder, hexadecimal = 0, base = 1;

    printf("Enter Decimal Number To Transfer To Hexadecimal Number : ");
    scanf("%d", &num);

    numcopy = num;

    while (num > 0)
    {
        remainder = num % 16;

        if (remainder >= 10)
        {
        hexadecimal = hexadecimal + remainder * base;
        num = num / 16;
        base  = base * 100;
        }
        else
        {
        hexadecimal = hexadecimal + remainder * base;
        num = num / 16;
        base  = base * 10;
        }
        
    }
    printf("Hexadecimal Value is %d", hexadecimal);
    

    return 0;
}