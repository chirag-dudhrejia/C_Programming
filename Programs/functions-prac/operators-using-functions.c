#include <stdio.h>

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    int a, b;

    printf("Enter Two Values TO Perform Arithmetic Operations.\n");
    scanf("%d %d", &a, &b);

    printf("\n\n");
    
    printf("Addition Is : %d\n", add(a,b));
    printf("Substraction Is : %d\n", substract(a,b));
    printf("Multiplication Is : %d\n", multiply(a,b));
    printf("Division Is : %.2f\n", divide(a,b));

    printf("\n\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return a / (float) b;
}
