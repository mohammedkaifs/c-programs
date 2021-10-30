#include<stdio.h>
int main()
{
    int age;
    printf("\n enter your age");
    scanf("%d", &age);

    switch(age)
    {
        case 3:
        printf("\n the age is 3");
    break;

    case 13:
     printf("\n the age is 13"
    break;

    case 23:
    printf("\n the age is 23");
    break;

    default:
    printf("age is not 3,13 or 23");
    break;
    }
}