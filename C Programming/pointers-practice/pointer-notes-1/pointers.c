#include <stdio.h>

int main()
{
    int a = 25;
    int *ptra = &a;

    printf("Practice of pointers.\n");

    printf("Value of A is %d\n", a);
    printf("Value of A is %d\n", *ptra);
    printf("Value of A is %d\n", *(ptra));

    printf("\n");

    printf("Address of A is %d\n", &a);
    printf("Address of A is %d\n", ptra);

    printf("\n");

    printf("Address of Ptra is %d\n", &ptra);

    return 0;
}