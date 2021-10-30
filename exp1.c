#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("\n Enter the airthematical expression:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':
        printf("\n %d",a+b);
        break;
        case '-':
        printf("\n %d",a-b);
        break;
         case '*':
        printf("\n %d",a*b);
        break;
         case '%':
        printf("\n %d",a%b);
        break;
        if(b!=0)
        {
         case '/':
        printf("\n %d",a/b);
        break;
        }
        else
        {
            printf("\n zeror error");
        }
        default:
        {
            printf("\n invalid operator");
        }
    }

    return 0;
}