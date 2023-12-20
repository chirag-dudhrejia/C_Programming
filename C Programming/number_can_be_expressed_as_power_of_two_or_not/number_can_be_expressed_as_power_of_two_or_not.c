#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    int remsum = 0, rem, Ncopy;
    Ncopy = N;

    while (Ncopy >= 2)
    {
        rem = Ncopy % 2;
        remsum += rem;
        Ncopy /= 2;
    }

    if (remsum == 0)
    {
        printf("%d is a number that can be expressed as power of 2.",N);
    }
    else
    {
        printf("%d cannot be expressed as power of 2.",N);
    }

    return 0;
}