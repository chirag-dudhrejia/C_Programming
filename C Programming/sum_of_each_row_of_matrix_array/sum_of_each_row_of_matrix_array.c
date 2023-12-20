#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }

    int sum[20];

    for (i = 0; i < r; i++)
    {
        int temp = 0;
        for (j = 0; j < c; j++)
        {
            temp = temp + matrix[i][j];
        }

        sum[i] = temp;
        printf("%d\n", sum[i]);
        
    }
    
   return (0);
}