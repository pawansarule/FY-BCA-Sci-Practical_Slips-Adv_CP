#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n, i, j, t;
    printf("how many numbers you want to be sorted?:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d number:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    printf("After sorting in ascending:\n");
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));
    
}