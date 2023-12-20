#include <stdio.h>
#include <string.h>

int namewidth = 20;

int database(int no_of_subs, int no_of_students, char name[][namewidth], int marks[][no_of_subs]);
int total(int no_of_subs, int no_of_students, int marks[][no_of_subs], int total_marks[]);
int avg(int no_of_subs, int no_of_students, int total_marks[], int average[]);
int topper(int no_of_subs, int no_of_students, char name[][namewidth], int marks[][no_of_subs]);
void pass_fail(int no_of_students, int no_of_subs, char name[][no_of_students], int marks[][no_of_subs]);
int name_verify(int no_of_students, char usr_inp_name[][namewidth], char name[][namewidth]);
int pass_fail_check(int name_verify_result, int no_of_subs, int marks[][no_of_subs]);

int main ()
{
    int no_of_students, no_of_subs, position;

    printf("Enter No Of Students & Subjects\n");
    scanf("%d %d", &no_of_students, &no_of_subs);

    char name[no_of_students][namewidth], option;
    int marks[no_of_students][no_of_subs], total_marks[no_of_students], average[no_of_students];

    database(no_of_subs, no_of_students, name, marks);

    total(no_of_subs, no_of_students, marks, total_marks);

    avg(no_of_subs, no_of_students, total_marks, average);

    printf("1 = Name & Marks Of Students\n2 = Partcular Student Pass Or Fail Status\n");
    scanf(" %c", &option);

    switch (option)
    {
    case '1':
        for (int i = 0; i < no_of_students; i++)
        {
            printf("\n\n%s", name[i]);
            for (int j = 0; j < no_of_subs; j++)
            {
                printf("  %d", marks[i][j]);
            }
            printf("\t%d", total_marks[i]);
            printf("\t%d", average[i]); 
        }
        break;
    // case '2':
    //     function to display perticular name and marks of perticular student
    //     break;
    case '2':
        pass_fail(no_of_students, no_of_subs, name, marks);
        break;
    }

    
    return 0;
}

// Pass or fail checking
void pass_fail(int no_of_students, int no_of_subs, char name[][namewidth], int marks[][no_of_subs])
{
    int i, j, name_verify_result, pass_fail_check_result;
    char usr_inp_name[1][namewidth];

    printf("Enter Name Of Student To Check Pass Fail Status\n");
    scanf(" %[^\n]s", usr_inp_name[0]);

    // calling name verify function which verifies name of student available in database or not
    name_verify_result = name_verify(no_of_students, usr_inp_name, name);

    if (name_verify_result == -1)
    {
        printf("\nNo Name Found In Database\n");
        goto end;
    }

    // Calling pass fail check function which checks if given student is pass or fail
    pass_fail_check_result = pass_fail_check(name_verify_result, no_of_subs, marks);

    if (pass_fail_check_result == 1)
    {
        printf("\n\n\"Pass\"\n\n");
    }
    else
    {
        printf("\n\n\"Fail\"\n\n");
    }
    end:

    return ;
}
int name_verify(int no_of_student, char usr_inp_name[][namewidth], char name[][namewidth])
{
    int i, flag = -1;

    for ( i = 0; i < no_of_student; i++)
    {
        if (strcmp(usr_inp_name[0],name[i]) == 0)
        {
            flag = i;
            goto end;
        }
    }
    end:
    return flag;
}
int pass_fail_check(int verify_result, int no_of_subs, int marks[][no_of_subs])
{
    int i, j, flag = 1;

    for ( j = 0; j < no_of_subs; j++)
    {
        if (marks[verify_result][j] < 40)
        {
            flag = -1;
            goto end;
        }
    }
    end:
    return flag;
}



int database(int no_of_subs, int no_of_students, char name[][namewidth], int marks[][no_of_subs])
{
    int i, j;
    printf("%d %d", no_of_students, no_of_subs);

    for (i = 0; i < no_of_students; i++)
    {
        printf("\n\nRoll No. %d\n", i+1);
        scanf(" %[^\n]s", name[i]);
        for (j = 0; j < no_of_subs; j++)
        {
            printf("Subject %d\t", j+1);
            scanf("%d", &marks[i][j]);
        }   
    }
}

int total(int no_of_subs, int no_of_students, int marks[][no_of_subs], int total_marks[])
{
    int i, j, sum = 0;

    for ( i = 0; i < no_of_students; i++)
    {
        sum = 0;
        for ( j = 0; j < no_of_subs; j++)
        {
            sum += marks[i][j];
        }  
        total_marks[i] = sum; 
    }   
}

int avg(int no_of_subs, int no_of_students, int total_marks[], int average[])
{
    int i, j;

    for (i = 0; i < no_of_students; i++)
    {
        average[i] = total_marks[i]/no_of_subs;  
    }
}

int topper(int no_of_subs, int no_of_students, char name[][namewidth], int marks[][no_of_subs])
{
    int i, j, total = 0, highest = 0, position;

    for ( i = 0; i < no_of_students; i++)
    {
        for ( j = 0; j < no_of_subs; j++)
        {
            total = total + marks[i][j];
        }

        if (total > highest)
        {
            highest = total;
            position = i;
        }
        
    }

}