#include <stdio.h>
//target : 67, 6, 5, 4, 3, 2, 1;

void arrayRev(int arr[])
{
    int temp;
    for(int i=0;i<7;i++)
    {
        temp = arr[i];
        arr[i]=arr[6-i];
        arr[6-i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        printf("\n The value of element %d is %d\n", i, arr[i]);
    }
    arrayRev(arr);

    for (int i = 0; i < 7; i++)
    {
        printf("\n The value of element %d is %d\n", i, arr[i]);
    }

    return 0;
}