#include <stdio.h>
#define ISZERO(n) (n == 0)
#define ISPOSITIVE(n) (n > 0)
#define ISNEGATIVE(n) (n < 0)
int main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    if (ISZERO(no))
    {
        printf("Given number is zero\n");
    }
    else if (ISPOSITIVE(no))
    {
        printf("Given number is positive\n");
    }
    else if (ISNEGATIVE(no))
    {
        printf("Given number is Negative\n");
    }

    return 0;
}