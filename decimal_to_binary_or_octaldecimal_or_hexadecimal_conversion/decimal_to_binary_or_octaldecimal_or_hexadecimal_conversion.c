#include <stdio.h>

int main()
{
    int num, numcopy, remainder, binary = 0, octadecimal = 0, hexadecimal = 0, base = 1;
    char selection;

    printf("Select Conversion From Below:\n1 = Binary\n2 = Octadecimal\n3 = Hexadecimal\n");
    scanf("%c", &selection);


    switch (selection)
    {
    case '1':
        printf("Enter The Number Here : ");
        scanf("%d", &num);
        
        while (num > 0)
        {
            remainder = num % 2;
            binary = binary + remainder * base;
            num = num / 2;
            base = base * 10;
        }
        printf("Binary value Is %d\n", binary);
        break;
    case '2':
        printf("Enter The Number Here : ");
        scanf("%d", &num);

        while (num > 0)
        {
            remainder = num % 8;
            octadecimal = octadecimal + remainder * base;
            num = num / 8;
            base = base * 10;
        }
        printf("Octal Value Is %d\n", octadecimal);
        break;
    case '3':
        printf("Enter The Number Here : ");
        scanf("%d", &num);
        
        while (num > 0)
        {
            remainder = num % 16;
            if (remainder >= 10)
            {
                hexadecimal = hexadecimal + remainder * base;
                num = num / 16;
                base = base * 100;
            }
            else
            {
                hexadecimal = hexadecimal + remainder * base;
                num = num / 16;
                base = base * 10;
            }

        }
        printf("Hexadecimal Value Is %d\n", hexadecimal);
        
        break;
    
    default:
        break;
    }

    return 0;
}