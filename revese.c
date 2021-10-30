#include<stdio.h>
int main()
{
    int num,rem,rev=0,dup;
    printf("\n Enter an integer number:");
    scanf("%d",&num);
    dup=num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("\n Reverse of %d",dup,rev);
    if(dup==rev)
    printf("\n The number %d is a palindrome",dup);
    else
    printf("\n The number %d is not a pallimdrome",dup);
    return 0;
}