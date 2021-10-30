#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("\n enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("\n factorial is %d",fact);
    return 0;
}