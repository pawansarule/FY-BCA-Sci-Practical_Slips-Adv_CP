#include <stdio.h>
#define SQUARE(x) x *x
#define CUBE(x) (SQUARE(x) * (x))
int main()
{
    int n, c;
    printf("Enter a number :\n");
    scanf("%d", &n);
    c = CUBE(n);
    printf("The cube of the number is : %d\n", c);
}