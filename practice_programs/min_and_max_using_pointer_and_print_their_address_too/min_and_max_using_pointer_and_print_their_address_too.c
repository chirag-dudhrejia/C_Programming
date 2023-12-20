#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number Of Elements Here : ");
    scanf("%d", &n);
    int arr[n], *min, *max;
    int *ptr;

    printf("Enter Elements Of Array Here.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    ptr = arr;
    max = arr[0];
    min = arr[0];

    // for (int i = 1; i < n; i++)
    // {
    //     if (max < ptr[i])
    //     {
    //         *max = &ptr[i];
    //     }
    //     else if (min > ptr[i])
    //     {
    //         *min = &ptr[i];
    //     }

    //     if (i == n-1)
    //     {
            printf("Maximum Number Is %d whose address is %u\n", max, *max);
            printf("Minimum Number Is %d whose address is %u\n", min, *min);
    //     }
        
        
    // }
    // printf("%u", &arr[2]);


    return 0;
}