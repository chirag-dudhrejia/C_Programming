int database(int no_of_subs, int marks[][0], int no_of_students)
{
    int i, j;

    for (i = 0; i < no_of_students; i++)
    {
        printf("Roll No. %d", i+1);
        // scanf(" %[^\n]s", name[i]);
        for (j = 0; j < no_of_subs; j++)
        {
            scanf("%d\t", marks[i][j]);
        }   
    }
    return 0;
}