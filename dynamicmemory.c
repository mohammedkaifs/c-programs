#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of malloc
    //scanf("%d", &n);
    //ptr = (int *)malloc(n * sizeof(int));
    //for (int i = 0; i < n; i++)
    //{
    //printf("\n Enter the value no %d of this array\n", i);
    //scanf("%d", &ptr[i]);
    //}

    //for (int i = 0; i < n; i++)
    // {
    //   printf("\n The value at %d of this array is %d \n", i, ptr[i]);
    //   }

    //use calloc
    int *ptr;
    int n;
    printf("\n Enter the sze of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n The value at %d of this array is %d \n", i, ptr[i]);
    }
     free(ptr);

    //using realloc
    printf("\n Enter the sze of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n The value at %d of this array is %d \n", i, ptr[i]);
    }
   
    return 0;
}