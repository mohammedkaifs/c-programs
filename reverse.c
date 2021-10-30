#include<stdio.h>
int main()
{
    int n,i,rev=0,rem;
    printf("\n enter value of n ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
    
        n=n/10;
    }
    printf("\n reversed number is %d",rev);
    return 0;
}