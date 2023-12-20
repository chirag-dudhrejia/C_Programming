#include <stdio.h>

int main()
{
    int N; 
    scanf("%d",&N);

    int count = 0, Ncopy;
    Ncopy = N;
    
    while (Ncopy != 0)
    {
        Ncopy /= 10;
        count++;
    }
    printf("The number %d contains %d digits.",N,count);
    

    return 0;
}