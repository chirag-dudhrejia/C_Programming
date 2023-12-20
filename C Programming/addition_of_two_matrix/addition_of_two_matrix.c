#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
 
int main() 
{
    int a[100][100], b[100][100], c[100][100], p, q, m, n;

    printf("Enter Rows And Column : ");
    scanf("%d %d", &m, &n);

    for ( p = 0; p < m; p++)
    {
        for ( q = 0; q < n; q++)
        {
            scanf("%d", &a[p][q]);
        }
    }

    for ( p = 0; p < m; p++)
    {
        for ( q = 0; q < n; q++)
        {
            scanf("%d", &b[p][q]);
        }
    }

    for ( p = 0; p < m; p++)
    {
        for ( q = 0; q < n; q++)
        {
            c[p][q] = a[p][q] + b[p][q];
        }
        
    }

    for ( p = 0; p < m; p++)
    {
        for ( q = 0; q < n; q++)
        {
            printf("%d ", c[p][q]);  
        }
        printf("\n");
        
    }
    
    return 0;
}