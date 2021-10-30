#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("\n Enter the quadratic equation:");  
    scanf("%f%f%f",&a,&b,&c);
    if(a!=0)
    {
        printf("\n Given coefficeints form a quadratic equation");
        d=(b*b)-(4*a*c);
    }
    if (d>0)
    {
        printf("\n roots are real and distinct");
        r1=(-b+sqrt(d))/(2*a);
         r1=(-b-sqrt(d))/(2*a);
         printf("\n Root1=%f \t Root2=%f\n",r1,r2);
    }
    else if (d==0)
    {
        printf("\n roots are imaginary");
        r1=-b/(2*a);
        r2=r1;
         printf("\n Root1=%f \t Root2=%f\n",r1,r2);
    
    }
    else
    {
        printf("\n roots are imaginary");
        r1=-b/(2*a);
        r2=sqrt(fabs(d))/(2*a);
         printf("\n Root1=%f+i%f \t Root2=%f-i%f\n",r1,r2,r1,r2);
    }
     return 0;
}