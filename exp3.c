#include<stdio.h>
int main()
{
    int num,rem,rev=0,dup;
    printf("\n Enter the to be check for pallindrome:");
    scanf("%d",&num);
    dup=num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("\n the reverse of  %d is %d",dup,rev);
    if(dup==rev)
    
        printf("\n the number is pallindrome",dup);
        else
        printf("\n the number is not pallindrome",dup);
    return 0;
}