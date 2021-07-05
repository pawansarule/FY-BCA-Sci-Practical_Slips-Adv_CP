#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main()
{
    int a, b, m;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    m = MAX(a, b);
    printf("The maximum of two number is %d\n", m);
    return 0;
}