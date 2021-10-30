#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("value at position 3 of the array is \n%d",arr[3]);
    printf("The address of first element of the array is %d \n",&arr[0]);
    printf("The address of first element of the array is %d \n",arr);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);


    return 0;
}