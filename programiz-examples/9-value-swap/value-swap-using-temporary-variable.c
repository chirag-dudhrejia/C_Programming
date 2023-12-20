#include <stdio.h>


int main()
{
    int a, b, temp;

    printf("\nEnter the value of A : ");
    scanf("%d", &a);

    printf("Enter the value of B : ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nA : %d\n", a);
    printf("B : %d\n\n", b);

    return 0;
}