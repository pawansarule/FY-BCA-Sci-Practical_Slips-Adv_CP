#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, *ptr, sum=0;
    printf("Enter the size of numbers:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",(i+1));
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("Sum is : %d\n",sum);

    return 0;
}