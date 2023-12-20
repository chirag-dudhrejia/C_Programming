#include <stdio.h>

int main()
{
    int num, result = 0, i, q, rem;

    printf("Enter any number : ");
    scanf("%d", &num);

    q = num;

    while (q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }
    
    if (result == num)
    {
        printf("\nNumber is Palindrome\n\n");

    }
    else
    {
        printf("\nNumber is not Palindrome\n\n");
    }
    

    return 0;
}