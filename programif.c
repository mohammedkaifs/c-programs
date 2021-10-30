#include<stdio.h>
int main()
{
    int age;
    printf("\n enter your age");
    scanf("%d",&age);
    printf("you have enterd %d as your age \n",age);
    if(age>=18)
    {
        printf("you can vote!");
    }
    else if(age>10)
    {
        printf("you are a teenager");
    }
    else
    {
        printf("you cannot vote");
    }
}