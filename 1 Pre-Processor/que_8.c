#include<stdio.h>
#define square(n) (n)*(n) 
int main()
{
    int a, h;
    printf("Enter a number to find the square of:\n");
    scanf("%d",&a);
    h=square(a);
    printf("The square of number is:%d\n",h);
    return 0;
}