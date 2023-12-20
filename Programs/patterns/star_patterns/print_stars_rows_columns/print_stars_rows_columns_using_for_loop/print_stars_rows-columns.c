#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter Number Of rows & columns you want 2D Print of stars\n");
    scanf("%d %d", &row, &column);
    printf("\n");

    for (int i = 1; i <= column; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}