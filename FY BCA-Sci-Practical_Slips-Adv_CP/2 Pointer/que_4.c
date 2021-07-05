#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,m,n,**a;
    a=(int **)malloc(3* sizeof(int*));
    for(i=0;i<3;i++)
    {
        a[i]=(int *)malloc(3*sizeof(int));
    }
    printf("Enter Matrix Elements for 3 X 3 matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",a[i]+j);
        }
    }
    printf("Matrix Elements are :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",*(a[i]+j));
        }
    }
    return 0;
}