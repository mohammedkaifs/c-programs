#include<stdio.h>

void starpattern(int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
                
        }
        printf("\n");
    }
}
 
 void reversestarpattern(int rows)
 {
  for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=rows-i-1;j++)
        {
            printf("*");
                
        }
        printf("\n");
    }
}

int main()
{
    int rows,type;
    printf("\n Enter 0 for star pattern and 1 for reverse star pattern\n");
    scanf("%d",&type);

    printf("\n Enter how many rows do you want");
    scanf("%d",&rows);
    switch(type)
    {
        case 0:
            starpattern(rows);
            break;

        case 1:
            reversestarpattern(rows);
            break;

            default:
            printf("\n you have enterd invalid choice");
            break;
    }
    
    
    return 0;
}