#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=4;
    int *ptr;  // This is a wild pointer 
   // *ptr=34; // This is not a good thing to do 
    ptr = &a; // ptr ids no longer a wild pointer
     printf("\n The value of a is %d\n",*ptr);

    return 0;
}