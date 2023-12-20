#include <stdio.h>

void calc_percentage(float);

struct Student
{
    int rollno;
    char name[20];
    float maths, science, english;
    float total, percentage;
};

void set_data(struct Student students[])
{
    int i;

    for ( i = 0; i < 2; i++)
    {
        printf("Enter data for student : %d\n", i+1);
        printf("Roll NO. : ");
        scanf("%d", &students[i].rollno);

        printf("Name : ");
        scanf(" %[^\n]s", students[i].name);

        printf("Maths : ");
        scanf("%f", &students[i].maths);

        printf("Science : ");
        scanf("%f", &students[i].science);

        printf("English : ");
        scanf("%f", &students[i].english);

        printf("\n");
    }
}

void calc_total(int i, struct Student students[i])
{
    float total;

    total = students[i].maths + students[i].science + students[i].english;

    printf("Total : %.2f\n", total);

    calc_percentage(total);
}

void calc_percentage(float total)
{
    printf("Percentage : %.2f\n", total/3);
}

void get_data(struct Student students[])
{
    int i;

    printf("\n\n");

    for ( i = 0; i < 2; i++)
    {
        printf("Roll No. : %d\n", students[i].rollno);
        printf("Name : %s\n", students[i].name);
        printf("Maths : %.1f\n", students[i].maths);
        printf("Science : %.1f\n", students[i].science);
        printf("English : %.1f\n", students[i].english);

        calc_total(i, students);

        printf("\n");
    }
    
}


int main()
{
    int i;
    struct Student students[2];


    set_data(students);

    get_data(students);
    
}