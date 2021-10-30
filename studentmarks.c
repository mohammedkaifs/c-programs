#include <stdio.h>

struct student
{
    int rollno, m1, m2, m3,sum;
    float  percent;
    char name[25];
};
int main()
{
    struct student s[20];
    int i, n;
    float avg;

    printf("\n Enter the number of students:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter the roll no\n");
        scanf("%d", &s[i].rollno);

        printf("\n Enter the name \n");
        scanf("%s", &s[i].name);

        printf("\n Enter m1 marks out of 100\n");
        scanf("%d", &s[i].m1);

        printf("\n Enter m2 marks out of 100\n");
        scanf("%d", &s[i].m2);

        printf("\n Enter m3 marks out of 100\n");
        scanf("%d", &s[i].m3);

        s[i].sum= s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percent = (s[i].sum / 300.00) * 100.00;
    }

    printf("\n student details are as follows\n");
    printf("\n rollno \t name \t total marks \t percentage\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t\t %s \t %d \t %f \n", s[i].rollno, s[i].name, s[i].sum, s[i].percent);
    }
    avg = 0.0;

    for (i = 0; i < n; i++)
    {
        avg = avg + s[i].percent;
    }
    avg = avg / n;
    printf("\n class average = %f", avg);

    for (i = 0; i < n; i++)
    {
        if (s[i].percent < avg)
            printf("\n students below average marks=%s", s[i].name);
        else
            printf("\n students above average marks=%s", s[i].name);
    }
    return 0;
}