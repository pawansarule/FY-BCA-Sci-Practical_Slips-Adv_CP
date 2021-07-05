#include <stdio.h>
#include <string.h>

struct student
{
    int rno;
    char name[20];
    int marks;
} s;
void main()
{
    printf("\nEnter details of student:");
    printf("\nRoll number: ");
    scanf("%d", &s.rno);
    printf("\nName:");
    scanf("%s", s.name);
    printf("\nMarks:");
    scanf("%d", &s.marks);

    printf("\nRoll Number:%d", s.rno);
    printf("\nStudent Name:%s", s.name);
    printf("\nStudent Marks:%d", s.marks);

    printf("\n");
}