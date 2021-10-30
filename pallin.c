#include<stdio.h>
int main()
{
    int n,temp,rem,rev=0;
    printf("\n Enter the number to be check for pallindrome ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("\n the reverse of %d is",temp,rev);
    if(temp==rev)
    printf("\n %d is a pallindrome",temp);
    else
    printf("\n %d is not pallindrome",temp);
    return 0;
}