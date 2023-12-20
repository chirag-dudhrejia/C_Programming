#include <Stdio.h>

int main()
{
    int a, b;

    printf("\nEnter value of A : ");
    scanf("%d", &a);


    printf("Enter value of B : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nA : %d\n", a);
    printf("B : %d\n\n", b);

    return 0;
}