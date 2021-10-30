#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q, i, j, k;
    printf("\n Enter the order of matrix A:");
    scanf("%d%d", &m, &n);
    printf("\n Enter the order of matrix B:");
    scanf("%d%d", &p, &q);
    if (n != p)

        printf("\n matrix multiplication is not possible\n");
    else
    {
        printf("\n matrix multiplication is possible\n");

        printf("\n Enter the elements of matrix A:");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("\n%d", &a[i][j]);
            }
        }
    }
    printf("\n The elements of matrix A are\n");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("\t %d", a[i][j]);
        }
    }
    printf("\n Enter the elements of matrix B:");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("\n%d", &b[i][j]);
        }
    }

    printf("\n Enter the elements of matrix B:");
    for (i = 0; i < p; i++)
    {
        printf("\n");
        for (j = 0; j < q; j++)
        {
            printf("\t %d", b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
    printf("\n The resultant matrix (matrix c) is \n");
    for (i = 0; j < m; i++)
    {
        printf("\n ");
        for (j = 0; j < q; j++)
        {
            printf("\t %d", c[i][j]);
        }
    }

    return 0;
}