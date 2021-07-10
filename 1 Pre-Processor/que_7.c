#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MINX(a,b,c) MIN(MIN(a,b),c)
int main()
{
    int a,b,c,m;
    printf("Enter the value of a, b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    m=MINX(a,b,c);
    printf("minimum number among Given number is: %d\n",m);
    return 0;
}