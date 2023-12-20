#include <stdio.h>

int main()
{
    int n, i = 2;

    printf("Enter the Number To check its Primality : ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            printf("%d Is not Prime\n", n);
            goto end;
        }
        i++;
        
    }
    printf("%d is Prime Number\n", n);

    end:
    
    return 0;
}