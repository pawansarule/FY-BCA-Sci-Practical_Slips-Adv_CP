#include <stdio.h>
void main()
{
    int a[10], n, num, i, flag = 0;
    printf("\nEnter how many numbers: ");
    scanf("%d", &n);
    printf("\nEnter array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter number to search in an array :");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            printf("\n%d is present at index %d", num, i);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("\nNumber is not present in an array");
}