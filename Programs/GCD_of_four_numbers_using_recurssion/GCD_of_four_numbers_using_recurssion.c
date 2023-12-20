#include <stdio.h>

int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a-b,b);
        }
        else
        {
            return hcf(a,b-a);
        }
        
    }

    return a;
}

int main()
{
    int n1, n2, n3, n4, result;
    printf("Enter 4 Numbers To Find HCF:");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    result = hcf(hcf(n1,n2),hcf(n3,n4));
    printf("%d", result);

    return 0;
}