#include <stdio.h>
void odd();
void even();

    int a = 1;
void odd()
{
    if (a <= 10)
    {
        printf("%d ", a + 1);
        a++;

        even();
    }
    return;
}
void even()
{
    if (a <= 10)
    {
        printf("%d ", a - 1);
        a++;

        odd();
    }
    return;
}

int main()
{
    odd();

}