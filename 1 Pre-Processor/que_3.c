#include <stdio.h>
#define OE(n) (n % 2 != 0 ? 1 : 0)
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    if (OE(n))
        printf("%d is odd number\n", n);
    else
        printf("%d is even number\n", n);
    return 0;
}