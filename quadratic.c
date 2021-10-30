#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf("\n Enter the coefficient of quadratic equation");
    scanf("%f %f %f",&a,&b,&c);
    if(a!=0)
    {
        d=(b*b)-(4*a*c);
        if (d>0)
        {
            printf("\n roots are real and distinct");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("\n root1=%f \t root2=%f",r1,r2);
            
        }
        else if (d==0)
        {
            printf("\n roots are real and equal");
            r1=b/(2*a);
            r2=r1;
            printf("\n root1=%f \t root2=%f",r1,r2);
        }
            else
            {
                printf("\n roots are imaginary");
                r1=b/(2*a);
                r2=sqrt(abs(d))/(2*a);
                printf("\n root1=%f+i%f \t root2=%f-i%f",r1,r2,r1,r2);
            }

        }
        else
        printf("\n coefficients are not equal non zero");
    return 0;
}