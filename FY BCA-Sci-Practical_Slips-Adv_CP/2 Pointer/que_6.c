#include<stdio.h>
int mul(int n1, int n2);
int main()
{
    int num1, num2, result;
    int (*ptr) (int,int);
    ptr= &mul;
    printf("Enter two number:\n");
    scanf("%d%d",&num1,&num2);
    result=(*ptr)(num1,num2);

    printf("Multiplication is:%d\n",result);
    return (0);
}
int mul(int n1, int n2)
{
    return(n1*n2);
}