#include<stdio.h>
#include<string.h>
struct driver;
int license_no;
char name[20];
char place[20];
int main()
{
    
    printf("\n Enter the name of driver\n");
    scanf("%s",&name);
    printf("\n Enter the license_no\n");
    scanf("%d",&license_no);
    printf("\n Enter the place\n");
    scanf("%s",&place);

    printf("\n The name of driver is: %s",name);
    printf("\n The license no of the driver is: %d",license_no);
    printf("\n The place the driver wants  to go is: %s",place);
    return 0;
}