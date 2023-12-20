#include <stdio.h>

int main()
{
    int i, inp, n;

    printf("Enter the last letter of series you want: ");
    scanf("%d", &inp);

    for (i = 1; i <= inp; i++)
    {
        n = i;
        if (i % 2 == 0)
        {
            continue;
        }
        
        printf("%d\n", i);
    }
    

    return 0;
}