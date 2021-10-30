#include<stdio.h>
int starpattern(int rows)
{
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("*");
            printf("\n");
        }
    }
}
int main()
{
    int rows;
    printf("\n Enter the number of rows");
    scanf("%d",&rows);
    int  starpattern(rows);
    
    return 0;
}