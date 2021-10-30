#include<stdio.h>
#include<string.h>
  union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};
int main()
{
    union student s1;
    s1.id=1;

    s1.fav_char='s';
    strcpy(s1.name,"kaif");
        s1.marks=34;

    printf("\n the id is %d \n",s1.id);
    printf("\n the marks is %d \n",s1.marks);
    printf("\n the fav_char is %c \n",s1.fav_char);
    printf("\n the name is %s \n",s1.name);

    
    return 0;
}