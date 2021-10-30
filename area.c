#include<stdio.h>
 int main()
 {
     float l,b,area,per;
     printf("\n Enter the value of l and b");
     scanf("%f%f",&l,&b);
     area = l*b;
     per = 2*(l+b);
     printf("\n the area of rectangle=%f",area);
     printf("\n the per of rectangle=%f",per);
     return 0;
 }