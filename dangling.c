#include<stdio.h>
#include<stdlib.h>

int* functionDangling()
{
    int a,b;
    int sum;
    a=34;
    b=364;
    sum = a+b;
    return sum;
}
int main()
{

    //case1 : de allocation of a memory block
    int *ptr=(int *) malloc(7* sizeof(int));
    ptr[0]=34;
    ptr[1]=36;
    ptr[2]=64;
    ptr[3]=5;
    free(ptr); //ptr is now a dangling pointer
     
     // case 2: fucntion returing local variable address
     int * dangptr= functionDangling();
    
    //case3: if a variable out of scope
    int * danglingptr3;
    {
        int a = 12;

        danglingptr3 = &a;
    }
    // here variable goes out of scope which means danglingptr3 is pointing to a location which is free
    //hence danglingptr3 is now a dangling pointer
    return 0;
}