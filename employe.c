#include<stdio.h>
int main()
{
    char n;
    int *ptr;
    int e1id;
    printf("enter the number of number of char:");
    scanf("%s",&n);
    ptr = (int *) calloc(n, sizeof(int *));
    for(int i=0;i<2;i++)
    {
        printf("\n enter the eid %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
     for (int i = 0; i < 2; i++)
    {
        printf("\n The value at %d of this array is %d \n", i, ptr[i]);
    }
    
    printf("enter the number of number of char:");
    scanf("%s",&n);
    ptr = (int *) calloc(n, sizeof(int *));
    for(int i=0;i<2;i++)
    {
        printf("\n enter the eid %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
     for (int i = 0; i < 2; i++)
    {
        printf("\n The value at %d of this array is %d \n", i, ptr[i]);
    }
     

    
    return 0;
}