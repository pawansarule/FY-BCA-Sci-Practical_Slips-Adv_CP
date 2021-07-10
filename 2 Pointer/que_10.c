#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, *ptr, sum=0, n, avg;

    printf("Enter how many numbers:");
    scanf(" %d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    avg=sum/n;
    printf("Sum of number is %d\n Average of number is %d\n",sum,avg);
    return 0;
}