#include<stdio.h>
int main()
{
    int a[20];
    int n,i,j,temp;
    printf("\n Enter the values of n: \n");
    scanf("%d",&n);
    printf("\n Enter %d values in ascending order:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n the values in sorted order are");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}