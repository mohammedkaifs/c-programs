#include<stdio.h>
int main()
{
    int num,rev=0,rem,temp;
    printf("\n enter the you want to reverse");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("\n reversed of %d is %d",temp,rev);
    if(temp==rev)
    printf("\n %d is pallindrome",temp);
    else
    printf("\n %d is not pallindrome",temp);
    return 0;
}