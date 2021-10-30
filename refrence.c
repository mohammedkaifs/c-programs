#include<stdio.h>
void (int *x,int *y)
{
    temp=*x+*y;
    *x=*x-*y;
    *y=temp;
    return;
}
int main()
{
    int a=4,b=3;
    printf("\n %d & %d \n",a,b);
    scanf( "%d%d",&a,&b);
     print("\n %d & %d \n",a,b);
    
    return 0;
}