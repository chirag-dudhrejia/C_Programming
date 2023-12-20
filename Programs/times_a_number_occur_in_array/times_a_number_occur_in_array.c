#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number OF Elements : ");
    scanf("%d", &n);
    int series[n], counter, i, j;

    printf("Enter Elements Here:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &series[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        counter = 0;
        for ( j = i-1; j >= 0; j--)
        {
            if (series[i] == series[j])
            {
                counter++;
            } 
        }
        // printf("%d", counter);

        if (counter == 0)
        {
            for (j = i; j < n; j++)
            {
                if (series[i] == series[j])
                {
                    counter++;
                }
                
            }
            
            if (counter > 0)
            {
                printf("%d Occurs %d Times.\n", series[i], counter);
            }
        }
  
    }
    
    return 0;
}