#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE * simp_file;

    if (!(simp_file = fopen("temp.dat", "w")))
    {
        printf("File not able to open.\n");
        return (1);
    }
    
    while ((c = getchar()) != '^' )
    {
        fputc(c, simp_file);
    }

    if ((fclose(simp_file)) == EOF)
    {
        printf("Error closing file\n");
        return 100;
    }
    
    printf("File completed.\n");

    return 0;
}