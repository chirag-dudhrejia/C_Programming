#include <stdio.h>

int main()
{
    int rows, cols, n, value;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);

    for ( rows = 1; rows <= n; rows++)
    {
        value = 0;
        for ( cols = rows; cols <= n-1; cols++)
        {
            printf(" ");
        }
        for ( cols = 1; cols <= (rows*2)-1; cols++)
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
        for ( cols = rows; cols <= n-1; cols++)
        {
            printf(" ");
        }
        
        printf("\n");
        
    }
    
    return 0;
}