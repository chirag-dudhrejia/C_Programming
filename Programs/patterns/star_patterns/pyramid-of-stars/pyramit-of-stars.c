#include <stdio.h>

int main()
{
    int row, i, j, num;

    printf("Enter the number of Rows you  want to print : ");
    scanf("%d", &row);

    for ( i = 1; i <= row; i++)
    {
        for (size_t j = 1; j <= row*2 - 1; j++)
        {
            if (j >= row - num && j <= row + num)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        num++;

        printf("\n");
        
    }
    

    return 0;
}