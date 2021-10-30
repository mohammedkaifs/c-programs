#include<stdio.h>
#include<math.h>
int main()
{
    float x,sum=0;
    int i,j,n,fact;
    printf("\n Enter the value of n & x :");
    scanf("%d%f",&n,&x);
    for(i=0;i<n;i++)
    {
        fact=1;
        j=2*i+1;
        while (j>0)
        {
            fact=fact*j;
            j=j-1;
        }
         sum=sum + ((float)(pow(x,2*i+1))*pow(-1,i)/(float)fact;
        
    }
    printf("\n Result=%f",sum);
    printf("\n using built in function sin(%2f)=%f",x,sin(x));
    printf("\n comparison (difference) between machine and built in function=%f",sum-sin(x));


    return 0;
}