#include <stdio.h>

void star(int a)
{
    if (a > 1)
    {
        star(a - 1);
    }
    for (int i = 0; i < a; i++)
    {
        printf(" * ");
    }
    printf("\n");
    
}

int main()
{
    int a;
    
    while (1)
    {
    printf("Enter The Number Of Star Row You Want TO Print : ");
    scanf("%d", &a);
    star(a);
    }
    


    return 0;
}