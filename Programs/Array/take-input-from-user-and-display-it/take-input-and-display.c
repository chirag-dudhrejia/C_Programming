#include <stdio.h>

int main()
{
    int age[5];

    printf("Enter The Values:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Value Of %d Element Of Array : ", i);
        scanf("%d", &age[i]);
    }

    printf("\nDisplay Values:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The value of Age %d is : %d\n", i+1, age[i]);
    }
    
    
    return 0;
}