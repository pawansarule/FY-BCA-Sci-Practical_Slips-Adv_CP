#include<stdio.h>
int main()
{
    int a[10],i,n,*ptr;
    printf("Enter the size of arrey:");
    scanf("%d",&n);
    printf("Enter the erray:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=a;
    printf("The given array in reverse order is:");
    for(i=n-1;i>=0;i--)
    {
        printf("%3d",ptr[i]);
    }
    return 0;
}