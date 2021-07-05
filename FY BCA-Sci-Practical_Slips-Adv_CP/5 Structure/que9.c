#include <stdio.h>

struct student
{
    int sno;
    char sname[20];
    int marks;
} s[10];
void main()
{
    int i = 0, n, t, a[10];
    int max = 0;

    printf("Enter how many students: \n");
    scanf("%d", &n);
    printf("\n Enter student details: ");
    for (i = 0; i < n; i++)
    {
        printf("\n Enter student id : ");
        scanf("%d", &s[i].sno);
        printf("\n Enter student name: ");
        scanf("%s", s[i].sname);
        printf("\n Enter student marks: ");
        scanf("%d", &s[i].marks);
        if (s[i].marks >= max)
        {
            max = s[i].marks;
            t = 1;
        }
    }
    printf("\n Student record with maximum marks: ");
    printf("\n Student id: %d\n Student Name : An Marks: %d", s[t].sno, s[t].sname, s[t].marks);
}