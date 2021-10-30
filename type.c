#include<stdio.h>
typedef struct student
{
int id;
int marks;
char fav_char;
char name[12];
} std;

int main()
{
    //int* a,b;
    typedef int* intpointer;
    intpointer a,b;
    
    int c =89;
    a=&c;
    b=&c;


    //std s1,s2;
    //s1.id = 56;
    //s2.id = 89;
   // printf("\n value of s1's Id is %d",s1.id);
     //printf("\n value of s2's Id is %d",s2.id);


    
    return 0;
}