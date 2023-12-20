#include <stdio.h>

int main()
{
    int maths, science;

    printf("Enter Your Score In Maths & Science.\n");
    scanf("%d %d", &maths, &science);
    printf("\n\n");

    if (maths >= 33 && science >= 33)
    {
        printf("Congratulations, You Passed In Maths And Science Both.\n\n");
        printf("You Won Reward Of Rs.1000 Cash.\n\n");
    }
    else if (maths >= 33 && science <= 33)
    {
        printf("You Passed In Only Maths.\n\n");
        printf("You Won Reward Of Rs.500 Cash.\n\n");
    }
    else if (maths <= 33 && science >= 33)
    {
        printf("You Passed In Only Science.\n\n");
        printf("You Won Reward Of Rs.500 Cash.\n\n");
    }
    else
    {
        printf("Succesfully Failed In Both Subjects.\n\n");
        printf("Padhle bhai thoda baato se ghar nai chalta.\n\n");
    }
    
    
    return 0;
}