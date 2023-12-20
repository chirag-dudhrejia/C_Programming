#include <stdio.h>

int main()
{
    int series[10], i, n, sum = 0;
    float average;
    
    printf("Enter The Number Of Elements You Want To Average Of : ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter Value of %d Element : ", i+1);
        scanf("%d", &series[i]);

        sum += series[i];
    }
    printf("\n");

    average = (float) sum / n;

    printf("Average : %.2lf\n", average);

    return 0;
}