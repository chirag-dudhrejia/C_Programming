#include <stdio.h>

int main()
{
    int decimalnum, num, remainder, binary = 0, base = 1;

    printf("Enter The Decimal Integer : ");
    scanf("%d", &decimalnum);

    num = decimalnum;

    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base  = base * 10;
    }
    printf("Input number is %d\n", decimalnum);
    printf("Its binary equivalent is = %d\n", binary);
    

    return 0;
}