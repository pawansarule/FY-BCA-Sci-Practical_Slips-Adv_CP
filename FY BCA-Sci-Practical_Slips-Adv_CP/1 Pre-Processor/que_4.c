#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int main()
{
    int a, b, m;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    m = MIN(a, b);
    printf("The minimum number is %d\n", m);
    return 0;
}