#include<stdio.h>
int main()
{
    int i,j,n,temp,a[10];
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the elelments:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf("\n The sorted elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}