#include<stdio.h>

int main()
{
    float p = 10,t = 20,r = 2,si;
    printf("\n Enter the value of p,t,r");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("\n simple interest=%f",si);

    return 0;
}