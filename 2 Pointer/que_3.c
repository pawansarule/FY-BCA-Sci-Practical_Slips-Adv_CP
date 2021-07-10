#include<stdio.h>
int main()
{
    int a,b,*p1,*p2,temp;
    printf("Enter the value of x and y:");
    scanf("%d%d",&a,&b);

    printf("Before swapping a=%d and b=%d",a,b);
    p1=&a;
    p2=&b;

    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After swappping a=%d and b=%d",a,b);
    return 0;
}