#include<stdio.h>

int factorial(int number)

{
    if(number == 1 || number == 1)
    {
        return 1;
    }
    else{
        return(number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("\n enter the number you want the factotrial of\n");
    scanf("%d",&num);
    printf("\n the factorial of %d is %d",num,factorial(num));

    return 0;

}