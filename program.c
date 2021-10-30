#include<stdio.h>
 main()
{
    clrsc();
    int n,rev=0,rem;
    printf("\n Enter the number to be revrsed");
    scanf("%d",&n);
     while(n!=0)
     {
         rem=n%10;
         rev=(rev*10)+rem;
         n=n/10;

     }
     printf("\n reversed number is %d",n);
     getch();
}