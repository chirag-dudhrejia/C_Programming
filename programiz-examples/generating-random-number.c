#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int pause, num1, num2, add, substract, multi;

    while (1)
    {
    
    num1 = rand() % 900 + 100;
    num2 = rand() % 900 + 100;
    printf("\n\n\n  %d\n", num1);
    printf("- %d", num2);

    pause = getc(stdin);

    // // ADDITION
    // add = num1 + num2;
    // printf("  %d\n\n\n", add);

    // SUBSTRACT
    substract = num1 - num2;
    printf("  %d\n\n\n", substract);

    // // MULTIPLICATION
    // multi = num1 / num2;
    // printf("  %d\n\n\n", multi);
    
    }


    return 0;
} 