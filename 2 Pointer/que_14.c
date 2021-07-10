#include<stdio.h>
int main()
{
    int a[10],*ptr,n,i;
    printf("Enter number of elements;\n");
    scanf("%d",&n);
    printf("Enter arrey elements:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    ptr=a;
    printf("Entered element are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}