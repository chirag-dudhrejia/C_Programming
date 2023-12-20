#include <stdio.h>

int main()
{
    int range1, range2, range1copy, fac = 1, rem, result = 0;

    printf("Enter Ranger You Want To Find Strong Numbers : ");
    scanf("%d %d", &range1, &range2);

    while (range1 <= range2)
    {
        range1copy = range1;
        while (range1copy != 0)
        {

            rem = range1copy % 10;

            for (rem; rem >= 1; rem--)
            {
                fac = fac * rem;
            }

            result = result + fac;
            fac = 1;
            range1copy = range1copy/10;
        }

        if (result == range1)
        {
            printf("%d\t", range1);
        }
        

        range1++;
    }

    return 0;
}