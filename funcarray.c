#include<stdio.h>
int func1(int array[])
{
    for(int i=0;i<4;i++);
    {
        printf("\n the value at %d is %d\n",i,array[i]);

    }
    return 0;
}
void func2(int*ptr)
{
    for(int i=0;i<4;i++)
    {
        printf("\n The value at %d is %d\n",i,*(ptr+1));

    }
    *(ptr+2)=6534;

}
void func3(int arr[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;i<2;j++)
        {
        printf("\n The value at %d,%d is %d\n",i,j,arr[i][j]);

    }
}
}

int main()
{
    int arr[][2]={{2,13},{9,3}};
    printf("the value at index 0 is %d",arr[0]);
    func1(arr);
    printf("the value at index 0 is %d",arr[0]);
    func2(arr);
    

    
    return 0;
}