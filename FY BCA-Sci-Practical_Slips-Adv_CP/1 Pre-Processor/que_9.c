#include <stdio.h>
#define SUM(a, b, c) a + b + c
int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The sum of three number is: %d\n", SUM(a, b, c));
    return 0;
}