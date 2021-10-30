#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a,n,i,sum=0; 
   printf("Enter the size of array :");
   
   scanf("%d",&n);
   a=malloc(n* sizeof(int));
   printf("Enter the array elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",(*a+i));
       sum+=*(a+i);
       
   }
   
   printf("sum=%d",sum);
   free(a);
   return 0;
}