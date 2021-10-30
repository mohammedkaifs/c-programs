#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],i,mid,low,high,n,key;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("\n search is successfull, number found");
            exit(0);

        }
        else if(key>a[mid])
        low=mid+1;
        else
        high=mid-1;
        
    }
    printf("search is unsucessfull, number not found");






    return 0;
}