#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;

    printf("Enter The Number To check Primality : ");
    scanf("%d", &num);

    for (i = 3; i < sqrt(num); i+=2)
    {
        if (num % i == 0)
        {
            printf("%d Is not Prime Number\n", num);
            goto end;
        }
        
    }
    printf("%d Is Prime Number\n", num);
    
    end:

    return 0;
}