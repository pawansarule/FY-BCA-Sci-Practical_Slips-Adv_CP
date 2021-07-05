#include<stdio.h>
#define pi 3.142
#define CALC(r) 2*pi*r 
int main()
{
    int r; float c;
    printf("Enter radius of circle:\n");
    scanf("%d",&r);
    c=CALC(r);
    printf("Circumference of the circle is %f\n",c);
    return 0;
}