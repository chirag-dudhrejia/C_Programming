#include <stdio.h>

void func(int num)
{
    if (num == 0)
    {
        return;
    }
    else
    {
        func(num/2);
        printf("%d ", num);
    }
    
    
    return;
}

int main()
{
    int num;

    printf("Enter Number Here : ");
    scanf("%d", &num);

    func(num);

    return 0;
}