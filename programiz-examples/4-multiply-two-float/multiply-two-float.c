#include <stdio.h>

int main()
{
    float a, b, multi;

    printf("Enter Float Value Of A\n");
    scanf("%f", &a);


    printf("Enter Float Value Of B\n");
    scanf("%f", &b);

    multi = a * b;

    printf("\nAnswer : %.2f\n", multi);

    return 0;
}