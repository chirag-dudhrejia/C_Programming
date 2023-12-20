#include <stdio.h>


int main()
{
    int i, num, ans;
    printf("Enter The Number you want Table For.\n");
    printf("Table Of: ");
    scanf("%d", &num);
    printf("\n");
    for (i = 1; i < 11; i++)
    {
        ans = i * num;
        printf("%d x %d = %d\n", num, i, ans);
    }

    printf("\n\n");

    return 0;
}