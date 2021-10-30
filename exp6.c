#include<stdio.h>
#include<stdlib.h>
int isprime(int x)

int main()
{
    int n,r;
    printf("\n Enter the number");
    scanf("%d",&n);
    r=isprime(n);
    if (r==1)
        printf("\n %d is a prime number",n);
        else
        printf("\n %d is not a prime number",n);
    int isprime(int x)
    {
        int i;
        for(i=2;i<x/2;i++)
        {
            if(x%i==0)
            return 0;
        }
    return 1;
}