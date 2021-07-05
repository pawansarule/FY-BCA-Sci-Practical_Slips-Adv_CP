#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a, **b, i, j, m, n;

    printf("Enter Number of rows & column of matrix :");
    scanf("%d%d",&m,&n);
    a=(int **)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }
    printf("Enter the Matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix Element are:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    b=(int **)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
    {
        b[i]=(int *)malloc(n*sizeof(int));
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("The Transpose of given Matrix is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}