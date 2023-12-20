#include <stdio.h>

int main()
{
    int a;
    long b;
    long long c;
    double d;
    long double e;

    printf("\nSize Of int : %zu butes\n", sizeof(a));
    printf("Size Of long : %zu butes\n", sizeof(b));
    printf("Size Of long long : %zu butes\n", sizeof(c));
    printf("Size Of double : %zu butes\n", sizeof(d));
    printf("Size Of long double : %zu butes\n\n", sizeof(e));


    return 0;
}