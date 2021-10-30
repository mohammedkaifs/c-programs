#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i;
    float *fp;
    float sum,sumsqr,mean,deviation,stddeviation,variance;

    printf("\n Enter the value of n");
    scanf("%d",&n);

    fp=(float *) malloc(n *sizeof(float));

    printf("\n Enter %d elements\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%f",(fp+i));

    }
     for(i=0;i<n;i++)
     {
         sum=sum+*(fp+i);

     }
     mean=sum/n;
      for(i=0;i<n;i++)
      {
          deviation=*(fp+i)-mean;
          sumsqr=(sumsqr+(deviation*deviation));


      }
      variance=sumsqr/n;
      stddeviation=sqrt(variance);

      printf("\n sum is %f",sum);
       printf("\n mean is %f",mean);
        printf("\n variance is %f",variance);

         printf("\n standard deviation is %f",stddeviation);
         free(fp);


    
    return 0;
}