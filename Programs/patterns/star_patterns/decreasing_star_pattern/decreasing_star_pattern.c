#include <stdio.h>

int main()
{
    int rows;

    printf("Enter Rows And Columns Respectively\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - (i-1); j++)
        {
            printf("* ");   
        }
        printf("\n");
    }
    

    return 0;
}