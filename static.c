#include <stdio.h>
int b=34;
int func1(int b1)
{
    static int myvar =0;
    printf("\n The value of myvar is %d\n",myvar);
    myvar++;


    return b1 + myvar;
}

int main()
{
    int b = 10;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    printf("\n The value of func1 is %d", val);
    
    return 0;
}