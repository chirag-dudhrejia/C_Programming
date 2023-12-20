#include <stdio.h>

int main()
{
    int num, numcopy, remainder, octadecimal = 0, base = 1;

    printf("Enter Any Number To Convert It to Octadecimal value : ");
    scanf("%d", &num);

    numcopy = num;

    while (num > 0)
    {
        remainder = num % 8;
        octadecimal = octadecimal + remainder * base;
        num = num / 8;
        base  = base * 10;
    }
    printf("Octadecimal value is : %d\n", octadecimal);

    return 0;
}