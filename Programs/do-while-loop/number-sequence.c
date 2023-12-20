#include <stdio.h>

int main()
{
    int num, index;
    index = 0;

    printf("Enter The Number Till You Want To Print\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index <= num);
    
}