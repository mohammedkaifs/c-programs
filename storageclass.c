#include <stdio.h>

int sum;
int myfunc(int a , int b)
{
    //int sum;
    sum = a + b;
    return sum;
}

int main()
{
    //Declaration= Telling the compiler about the variable (no space reserved)
    //defination= Declaration + space reservation
    //int sum = myfunc(3, 5);
    printf("The sum is %d ", sum);

    return 0;
}