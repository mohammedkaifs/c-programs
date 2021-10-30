#include <stdio.h>

int myfunc(int a, int b)       
{
    static int myvar;
    myvar++;
    printf("\n The myvar is %d\n", myvar);

    return myvar;
}
int main()
{
   register int myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
   // printf("\nThe myvar is %d\n", myvar);
    return 0;
}