#include <stdio.h>

int main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;

    printf("Size Of int : %zu butes\n", sizeof(intType));
    printf("Size Of char : %zu butes\n", sizeof(charType));
    printf("Size Of float : %zu butes\n", sizeof(floatType));
    printf("Size Of double : %zu butes\n", sizeof(doubleType));

    return 0;
}