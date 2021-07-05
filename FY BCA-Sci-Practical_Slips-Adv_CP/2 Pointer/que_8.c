#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, i, n, max=0, min=0;

    printf("Enter the how many niumbers:");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",a+i);
    }
    min=*a;
    for(i=0;i<n;i++)
    {
        if(*a>max)
        max=*a;
        else if(*a<min)
        min=*a;
        a++;
    }
    printf("Maximum number is: %d\n",max);
    printf("Minimum number is: %d\n",min);
   
}