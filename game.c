#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generaterandomnumber(int n)
{
srand(time(NULL));

    return rand()%n;

}

int main()
{
    //srand takes seed as input and is defined in stdlib.h
    printf("\n The random number between 0 to 5 is %d\n",generaterandomnumber(5));
    
    return 0;
}