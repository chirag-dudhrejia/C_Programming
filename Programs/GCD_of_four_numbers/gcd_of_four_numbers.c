#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int n1, n2, n3, n4, result;
    printf("Enter 4 Numbers To Find GCD:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    result = gcd(gcd(n1,n2), gcd(n3,n4));
    printf("\nGCd Of %d, %d, %d, %d Is : %d\n", n1, n2, n3, n4, result);

    return 0;
}

int gcd(int a, int b)
{
    int temp;

    while ((a % b) != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    
    return b;
}