#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter The Diension Of Array : ");
    scanf("%d", &dimension);
    int a[dimension], min, i;

    printf("\nEnter %d Values To Find Smallest Value Among Them:\n", dimension);

    for (i = 0; i < dimension; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < dimension; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
        
    }
    printf("\nMinimum Is %d", min);
    

    return 0;
}