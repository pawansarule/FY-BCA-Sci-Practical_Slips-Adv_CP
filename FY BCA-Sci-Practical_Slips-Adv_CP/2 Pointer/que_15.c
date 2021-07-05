#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr,sum=0,avg;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Enter element%d:",(i+1));
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    avg=sum/n;
    printf("Sum is: %d\nAverage is: %d\n",sum,avg);
    return 0;
}