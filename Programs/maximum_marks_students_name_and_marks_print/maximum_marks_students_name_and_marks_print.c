#include <stdio.h>

int highest(int marks[], int num)
{
    int position, max;

    max = marks[0];

    for (int i = 0; i < num; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
            position = i;
        }   
    }
    return position;
}

int main ()
{   
    char name[10][20];
    int num, marks[10], position, i;

    printf("Enter Number OF Students : ");
    scanf("%d", &num);

    printf("Enter Name And Marks Of Students\n");
    for (i = 0; i < num; i++)
    {
        printf("\nstudent No. %d\n", i+1);
        scanf(" %[^\n]s", name[i]);
        scanf("%d", &marks[i]);     
    }

    position = highest(marks, num);

    printf("\n%s : %d\n", name[position], marks[position]);
    

    return 0;
}