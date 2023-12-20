#include <stdio.h>

int main()
{
    int rows, columns;
    int row, column;

    printf("Enter Rows And Columns Respectively\n");
    scanf("%d %d", &rows, &columns);

    row = 1;
    while (row <= rows)
    {
        column = 1;
        while (column <= columns)
        {
            printf("* ");
            column++;
        }

        printf("\n");
        row++;
    }

    return 0;
}