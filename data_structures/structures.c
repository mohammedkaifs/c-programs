#include<stdio.h>
int main()
{
    struct student
    {
        int rollno;
        float per;

    };
    struct student s;
    printf("Enter the roll no and percentage of the student ");
    scanf("%d%f",&s.rollno,&s.per);
    printf("roll no=%d per=%f",s.rollno,s.per);
    return 0;
}