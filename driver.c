#include <stdio.h>
#include <string.h>
struct driver
{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;
    printf("\n Enter the details of  driver no 1\n");
    printf("\n Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("\n Enter the dlno of the first driver\n");
    scanf("%s", &d1.dlno);

    printf("\n Enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("\n Enter the kms of the first driver\n");
    scanf("%d", &d1.kms);

    printf("\n Enter the details of  driver no 2\n");
    printf("\n Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("\n Enter the dlno of the second driver\n");
    scanf("%s", &d2.dlno);

    printf("\n Enter the route of the second driver\n");
    scanf("%s", &d2.route);

    printf("\n Enter the kms of the second driver\n");
    scanf("%d", &d2.kms);

    printf("\n Enter the details of  driver no 3\n");
    printf("\n Enter the name of the third driver\n");
    scanf("%s", &d3.name);

    printf("\n Enter the dlno of the third driver\n");
    scanf("%s", &d3.dlno);

    printf("\n Enter the route of the third driver\n");
    scanf("%s", &d3.route);

    printf("\n Enter the kms of the third driver\n");
    scanf("%d", &d3.kms);

    printf("******printing information of these drivers*****");

    printf("\n for diver no 1:\n name is %s", d1.name);
    printf("\n for diver no 1:\n DLno is %s", d1.dlno);
    printf("\n for diver no 1:\n Route is %s", d1.route);
    printf("\n for diver no 1:\n Kms  is %d", d1.kms);

    printf("\n for diver no 2:\n name is %s", d2.name);
    printf("\n for diver no 2:\n DLno is %s", d2.dlno);
    printf("\n for diver no 2:\n Route is %s", d2.route);
    printf("\n for diver no 2:\n Kms is %d", d2.kms);

    printf("\n for diver no 3:\n name is %s", d3.name);
    printf("\n for diver no 3:\n DLno is %s", d3.dlno);
    printf("\n for diver no 3:\n Route is %s", d3.route);
    printf("\n for diver no 3:\n Kms is %d", d3.kms);
    return 0;
}