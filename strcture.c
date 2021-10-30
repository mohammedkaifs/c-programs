#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    int marks;
    char name[20];

};

int main()
{
    struct student kaif,darsh,adnan;
    kaif.id=1;
    darsh.id=2;
    adnan.id=3;
    kaif.marks=77;
    darsh.marks=59;
    adnan.marks=80;
    printf("\n kaif got %d marks\n",kaif.marks);
    printf("\n kaif got %d as id\n",kaif.id);
    printf("\n darsh got %d marks\n",darsh.marks);
    printf("\n darsh got %d as id\n",darsh.id);
    printf("\n adnan got %d marks\n",adnan.marks);
    printf("\n adnan got %d as id\n",adnan.id);
    
    return 0;
}