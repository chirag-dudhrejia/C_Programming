#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number Of Elements In Array : ");
    scanf("%d", &n);
    int arr[n];
    int *ptr;

    printf("Enter Elements Here.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr+(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[-i]);
    }
    
    

    return 0;
}