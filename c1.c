#include<stdio.h>
int main()
{
    int a[10][10];
    int m,n,i,j;
    printf("\n Enter the order of matrix");
    scanf("%d%d",&m,&n);
    printf("\n Enter the %d values,m*n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d%d",a[i][j]);
                 
        }
    }
    printf("\n the array elements are ")
    return 0;
}