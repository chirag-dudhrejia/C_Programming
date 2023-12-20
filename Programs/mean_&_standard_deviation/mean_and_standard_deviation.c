#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter The Number Of Observations To Calculate Mean & Standard Deviation\n");
    scanf("%d", &n);
    int a[n], b[n], sum = 0;
    float mean, variance, std_dev;

    
    printf("Enter The Values here:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Mean & Standard Deviation Of (");
    for (int i = 0; i < n; i++)
    {
        if (i<(n-1))
        {
            printf("%d, ", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
        
    }
    printf(") are:\n");

    mean = (float)sum / n;
    sum = 0;

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] - mean;
        b[i] *= b[i];
        sum += b[i];
    }

    variance = (float)sum / (n-1);
    
    std_dev = sqrt(variance);

    printf("\nMean Is : %.2f\n", mean);
    printf("Standard Deviation is : %.2f\n", std_dev);

    return 0;
}