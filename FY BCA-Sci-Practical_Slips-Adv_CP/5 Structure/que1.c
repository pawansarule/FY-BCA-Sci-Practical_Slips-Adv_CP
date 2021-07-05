#include <stdio.h>

struct empl
{
    int eno, sal;
    char ename[20];
} e[10];
void main()
{
    int n, i, max, maxsal;

    printf("\nEnter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter the employee information: ");
        printf("\nEnter the employee number and name: ");
        scanf("%d%s", &e[i].eno, e[i].ename);
        printf("\nEnter the salary of employee: ");
        scanf("%d", &e[i].sal);
        printf("\nEmployee %s with eno %d has salary %d", e[i].ename, e[i].eno, e[i].sal);
    }
    maxsal = e[0].sal;
    for (i = 1; i < n; i++)
    {
        max = e[i].sal;
        if (max > maxsal)
            maxsal = max;
    }
    for (i = 0; i < n; i++)
    {
        if (e[i].sal == maxsal)
            printf("\n\n\nThe employee%s with eno %d has maximum salary %d", e[i].ename, e[i].eno, maxsal);
    }
}