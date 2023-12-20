#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int change(int x)
{
    printf("F : Before X = %d\n", x);
    x = x/2;
    printf("F : After X = %d\n", x);
    return (x);
}
 
int main()
{
    int x = 10, b;
     printf("M : Initially X = %d\n", x);
     b = change(x);
     printf("M : X = %d, b = %d\n", x, b);

   return (0);
}