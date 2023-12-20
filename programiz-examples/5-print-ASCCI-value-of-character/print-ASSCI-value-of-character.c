#include <stdio.h>

int main()
{
    char c;

    printf("Enter Any Character to print ASCII Value\n");
    scanf("%c", &c);

    printf("ASCII Value of %c : %d", c, c);

    return 0;
}