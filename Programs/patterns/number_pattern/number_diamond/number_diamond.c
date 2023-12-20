#include <stdio.h>

int main()
{
    int rows, cols, n, value;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);

    for (rows = 1; rows <= n * 2 - 1; rows++)
    {
        value = 0;
        if (rows <= n)
        {
            for (cols = rows; cols <= n - 1; cols++)
            {
                printf(" ");
                if (cols > n)
                {
                    for (int cols = 1; cols <= rows - n; cols++)
                    {
                        printf(" ");
                    }
                }
            }
            for (cols = 1; cols <= (rows * 2) - 1; cols++)
            {
                if (cols <= rows)
                {
                    printf("%d", ++value);
                }
                if (cols > rows)
                {
                    printf("%d", --value);
                }
            }
            for (cols = rows; cols <= n - 1; cols++)
            {
                printf(" ");
            }
        }
        if (rows > n)
        {
            int bottom = n * 2 - rows;
            for (cols = rows; cols > n; cols--)
            {
                printf(" ");
            }
            for (cols = 1; cols <= (bottom * 2) - 1; cols++)
            {
                if (bottom >= cols)
                {
                    printf("%d", ++value);
                }
                if (bottom < cols)
                {
                    printf("%d", --value);
                }
            }
            for ( cols = rows; cols > n; cols--)
            {
                printf(" ");
            }
            
        }

        printf("\n");
    }

    return 0;
}