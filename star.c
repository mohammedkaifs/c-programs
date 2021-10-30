#include<stdio.h>

void starpattern(int rows)
{
  for(int i=0; i<rows; i++)
  {
      for (int j=0j<=i;j++)
      {
        printf("*");
  }
}
}
int main()
{
    int rows;
    printf("How many rows do you want\n");
    scanf("%d",rows);
    starpattern(rows);
    return 0;
}