#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number Of Elements Here : ");
    scanf("%d", &n);
    int series[n], i, counter;

    printf("Enter Emelents Here:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &series[i]);
    }

    for ( i = 0; i < n; i++)
    {
        counter = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (series[i] == series[j])
                {
                    counter++;
                } 
            }
        }

        if (counter == 0)
        {
            printf("%d", series[i]);
        }  
    }

    return 0;
}