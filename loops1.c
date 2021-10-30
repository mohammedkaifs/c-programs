#include<stdio.h>
int main()
{
    int n,sum = 0,i;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum+1;
    }
    printf("sum of numbers=%d",sum);
      return 0;
}