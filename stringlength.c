#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_length(char str1[])
{
    int c = 0;
    while (*(str1+c)!='\0')
    c++;
    return c;
}
int string_compare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

void string_cat(char *s1, char *s2)

{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; i++,j++)
            {
                s1[i] = s2[j];
            }
    s1[i] = '\0';
    printf("\n concatenated string = %s", s1);
    return;
}
int main()
{
    char string1[20], string2[20];
    int res, choice;
    while (1)
    {
        printf("\n menu of choice \n.1.find length\n.2.compare\n.3.conctenate\n.4.exit");
        printf("\n Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter the strings to be compared:");
            scanf("%s", string1);
            printf("\n length of the string is : %d", string_length(string1));
            break;

        case 2:
            printf("\n Enter the strings to be compared:");
            printf("\n Enter the string1 \n");
            scanf("%s", string1);
            printf("\n Enter the string2 \n");
            scanf("%s", string2);
            res = string_compare(string1, string2);
            if (res == 0)
                printf("\n Given strings are equal \n");
            else
                printf("\n Given strings are not equal \n");
            break;

        case 3:
            printf("\n Enter the strings to be concatenated:");
            scanf("%s%s",string1,string2);
            printf("\n concatenated string is %s & %s", string1);
            break;
            default:
            printf("\n wrong choice \n");
        }
    }
    return 0;
}