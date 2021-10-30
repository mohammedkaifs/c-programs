#include<stdio.h>

int main()
{
   int marks[4];

   for(int i =0; i<4;i++)
   {
       printf("\n enter the value of %d element of the array\t",i);
       scanf("%d",&marks[i]);
   }
   //marks[0] = 34;
   //printf("\n marks of student 1 is %d",marks[0]);
   //marks[0] = 4;
   //printf("\n marks of student 1 is %d",marks[0]);
    for(int i =0; i<4;i++)
   {
       printf("\n enter the value of %d element of the array %d\t",i,marks[i]);
   }
    
    return 0;
}