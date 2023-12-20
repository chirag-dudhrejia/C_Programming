#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number Of Elements : ");
    scanf("%d", &n);
    int numerator[n], denominator[n], i;
    float result[n], sum = 0;

    printf("Enter Numerators here:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numerator[i]); 
    }
    printf("Enter Denomiators here:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &denominator[i]);
    }

    for (i = 0; i < n; i++)
    {
        result[i] = (float)numerator[i]/denominator[i];
        sum = sum + result[i];
    }

    printf("Sum : %.3f", sum);

    return 0;
}