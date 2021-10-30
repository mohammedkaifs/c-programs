#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s1[20];
    char s2[20];
    char s3[20];
    //char s3[]="";
    //puts(strcat(s1,s2));
    //printf("\n The length of s1 is %d\n",strlen(s1));
    //printf("\n The length of s2 is %d\n",strlen(s2));
    //printf("\n the reversed string s1 is :");
     //puts(strrev(s1));
    //printf("\n the reversed string s2 is :");
    //puts(strrev(s2));
    //strcpy(s3,strcat(s1,s2));
    //puts(s3);
    printf("\n enter the name\n");
    scanf("%s",&s1);
    strcat(s1,"is friend ");

    printf("\n enter the second name\n");
    scanf("%d",&s2);
    strcat(s2,"of");
    puts(strcat(s1,s2));
        return 0;
}