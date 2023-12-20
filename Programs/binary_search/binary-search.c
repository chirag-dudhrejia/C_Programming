#include <stdio.h>

int bin_search(int arr[], int n, int key);

int main()
{
    int n;
    printf("Enter Number Of Elements Here : ");
    scanf("%d", &n);
    int arr[n], key, m, r, l, pos;

    printf("Enter Elements Here:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Number You Want To Search : ");
    scanf("%d", &key);

    pos = bin_search(arr, n, key);

    printf("\n\nNumber %d Is Present At %d Position In Array\n\n", key, pos+1);
    

    return 0;
}

int bin_search(int arr[], int n, int key)
{
    int l, r, mid;

    l = -1, r = n;

    while ((l+1) != r)
    {
        mid = (l+r)/2;
        if (arr[mid] <= key)
        {
            l = mid;
        }
        else
        {
            r = mid;
        } 
    }

    if (l >= 0 && arr[l] == key)
    {
        return l;
    }
    else
    {
        return -1;
    } 
}