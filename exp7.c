#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,low,high,mid,key,a[i];
    printf("\n Enter the value of n");
    scanf("%d",&n);
    printf("Enter %d values in ascending order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n Enter the number to be searched:");
    scanf("%d",&key);
    printf("\n array elments are");
     for(i=0;i<n;i++)
     {
      printf("\n%d",&a[i]);
      return 1;
      exit(0);
     }
     low=0;
     high=n-1;
     while(low<=high)
     {
     mid=(low+high)/2;
     if (a[mid]==key)
     {
         printf("\n search is succesfull,number is found");
        
     }
      else if (a[mid]<=key)
      
      high=mid-1;
      else
      low=mid+1;
     }
      printf("\n search is unsuccesfull,number is not found");
    return 0;
}