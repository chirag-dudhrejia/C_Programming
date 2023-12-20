#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
 
int main() 
{
    char line[50];
    int len;

    printf("Input here\n");
    scanf("%[^\n]", line);

    len = strlen(line);
    for (int i = 0; i < len; i++)
    {
        if (isupper (line[i]) == 0)
        {
            for (int k = i; k < len; k++)
            {
                line[k] = line[k+1];
            }
            i--;
            len--;
            
        }
        
    }
    printf("%s", line);
    
}