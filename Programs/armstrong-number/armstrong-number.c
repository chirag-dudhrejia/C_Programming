#include <stdio.h>

int main()
{
    int num, numcopy, numcheck, count = 0, cnt, rem, mul=1, result = 0;

    printf("Enter Number You Desire : ");
    scanf("%d", &num);

    numcopy = num;
    numcheck = num;

    while (num != 0)
    {
        num = num/10;
        count++;
    }

    printf("Count : %d\n", count);
    
    cnt = count;

    while (numcopy != 0)
    {
        rem = numcopy%10;
        while (cnt != 0)
        {
            mul = mul*rem;
            cnt--;
        }
        
        result = result + mul;
        mul = 1;
        numcopy = numcopy/10;
        cnt = count;
    }
    
    printf("Result is : %d\n", result);

    if (result == numcheck)
    {
        printf("Number is Armstrong Number\n");
    }
    else
    {
        printf("Number is not Armstrong Number\n");
    }
    

    return 0;
}