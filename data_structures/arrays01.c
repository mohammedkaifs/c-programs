
#include<stdio.h>
int main()
{
   int a[10],n,i,sum=0; 
   printf("Enter the size of array :");
   scanf("%d",&n);
   printf("Enter the array elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
    //    sum=sum+a[i];
       
   }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   printf("sum=%d",sum);
    
    return 0;
}