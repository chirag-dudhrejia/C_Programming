#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    
    int input, random;
    char playagain;

    beginning:
    printf("Enter Number Between 0 to 10\n");
    scanf("%d", &input);

    random = rand() % 10;

    printf("\n", random);

    if (input == random)
    {
        printf("Congratulations.\n");
        printf("You have on Jackpot.\n");
    }
    else
    {
        printf("Better Luck Next Time.  Drow is: %d\n\n", random);
 
    }
       
    printf("Want TO Play Again? Enter Y = yes N = no\n");
    scanf("%s", &playagain);

    printf("\n");

        system("cls");
    if (playagain == 'y')
    {
        goto beginning;
    }
    else
    {
        printf("Thanks For Playing\n\n");
    }
    
    return 0;
}