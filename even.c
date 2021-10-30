#include<stdio.h>
int main()
{
    int n,i,esum=0,osum=0,sum=0;
    float avg;
    printf("\n enter number");
    scanf("%d,&n");
    i=1;
       while(i<=n)
       {
           if(i%2==0)
       esum=esum+i;
       else
       osum=osum+i;
       sum=sum+i;
       i++;
}
   avg=(float)sum/n;
   printf("\n evensum=%d oddsum=%d sum=%d Average=%f",esum,osum,sum,avg);
   return 0;

}