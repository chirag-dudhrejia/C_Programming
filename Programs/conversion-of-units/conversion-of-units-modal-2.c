#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float km, mile, inch, foot, cm, pound, kg, meter;
    char option;
    start:
    printf("Available Conversions.\n\n");
    printf("1. Kilometers To Miles\n2. Inches To Foot\n3. Cms To Inches\n4. Pound To Kgs\n5. Inches To Meters\n");
    printf("Choose The Conversion From Above : ");
    scanf("%d", &num);

    printf("\n");

    switch (num)
    {
    case 1:
        printf("Enter Kilometers to convert into miles : ");
        scanf("%f", &km);
        mile = km / 1.609;

        printf("%.3f Kms = %.3f Miles\n\n", km, mile);

        break;
    case 2:
        printf("Enter Inches to convert into Foot : ");
        scanf("%f", &inch);
        foot = inch / 12;

        printf("%.3f Inches = %.3f Foot\n\n", inch, foot);
        break;
    case 3:
        printf("Enter Centimeters to convert into Inches : ");
        scanf("%f", &cm);
        inch = cm / 2.54;

        printf("%.3f Cms = %.3f Inches\n\n", cm, inch);
        break;
    case 4:
        printf("Enter Pound to convert into Kilograms : ");
        scanf("%f", &pound);
        kg = pound / 2.205;

        printf("%.3f Pound = %.3f Kgs\n\n", pound, kg);
        break;
    case 5:
        printf("Enter Inches to convert into Meter : ");
        scanf("%f", &inch);
        meter = inch / 39.37;

        printf("%.3f Inches = %.3f Meter\n\n", inch, meter);
        break;

    default:
        printf("Invalid Input, Please Select Any One From Numbers Given Above");
        break;
    }

    printf("Perform Operation Again = A\nExit Program = E\n");
    scanf(" %c", &option);

    if (option == 'a')
    {
        system("cls");
        goto start;
    }
    else if (option == 'e')
    {
        system("cls");
        printf("We Are Glad To help You.\n\n");
    }

    return 0;
}