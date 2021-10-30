#include<stdio.h>
int main()
{
    int gift;
    printf("\n  choice 1 for maths\n");
    printf("\n  choice 2 for science\n");
    printf("\n  choice 3 for both maths and science\n");
    printf("\n enter your choice");
    scanf("%d",&gift);
    printf("\n you have enterd %d as your gift",gift);


    if (gift==1)
    {
        printf("\n congratulation you have got 15rs\n");
    }
    else if (gift==2)
    {
        printf("\n congratulation you have earned 30rs");
    }
    else if(gift==3)
    {
        printf("\n congratulation you have got 45rs");

    }
    else
    {
        printf("\n invalid choice");
    }
    
    return 0;
}
