#include <stdio.h>

int fib(int num)
{
    static int n1 = 0, n2 = 1, n3;

    if (num>0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        
        printf("%d ", n3);

        fib(num-1);
    }
    

}

int main()
{
    int num;

    printf("Enter The Number Of Elements : ");
    scanf("%d", &num);

    printf("fibonacci Series\n");
    printf("%d %d ", 0, 1);
    fib(num-2);

    return 0;
}