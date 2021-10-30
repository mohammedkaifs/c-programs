#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter the number you want multiplication table of:");
    scanf("%d",&num);
    printf("multipliction table of %d is as followa \n",num);
    for(int i=1; i<21;i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}