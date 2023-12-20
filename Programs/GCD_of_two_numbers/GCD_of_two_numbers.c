#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter Two Numbers To Find Its Greatest Common Divisor\n");
    scanf("%d %d", &a, &b);

    while ((a % b) != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("The GCD is %d", b);

    return 0;
}