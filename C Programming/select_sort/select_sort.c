#include <stdio.h>

int selec_sort(int arr[], int size);
int min_locat(int arr[], int k, int size);
int selec_swap(int arr[], int m, int k, int size);

int main()
{
    int size;
    printf("Enter Size Of Array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Elements Here\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    selec_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}


int selec_sort(int arr[], int size)
{
    int k, m;

    for (int k = 0; k < size; k++)
    {
        m = min_locat(arr, k, size);

        selec_swap(arr, m, k, size);

    }
    
}
int min_locat(int arr[], int k, int size)
{
    int pos;
    pos = k;

    for (int i = k+1; i < size; i++)
    {
        if (arr[pos] > arr[i])
        {
            pos = i;
        }
    }
    return pos;
    
}
int selec_swap(int arr[], int m, int k, int size)
{
    int temp;

    temp = arr[k];
    arr[k] = arr[m];
    arr[m] = temp;
    
}