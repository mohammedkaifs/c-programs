#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[10],key;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the key to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
    {

        printf("search is successfull\n");

        printf("The element is=%d",key);

        // getch();
        exit(0);
    } 
}

    printf("search is unsucessfull");
       

   
    return(0);
    // getch();
}