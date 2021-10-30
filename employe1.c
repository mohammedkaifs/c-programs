#include<stdio.h>
#include<stdlib.h>

int main()
{
    int chars,i=0;
    char a,b;
    char *ptr;
    while (i<3)
    {
        printf("\n employee %d:Enter the number of character in your employee id \n",i+1);
        scanf("%d",&chars);
        printf("\n Enter the value of a\n");
        scanf("%c",&a);
        printf("\n Enter the value of b \n");
        scanf("%c",&b);
        ptr = (char *) malloc((chars+1)*sizeof(char));

        printf("\n Enter your employee id\n");
        scanf("%s",ptr);
        printf("\n you employee id is %s \n",ptr);
        free(ptr);

        i=i+1;
    }
    
    
    return 0;
}