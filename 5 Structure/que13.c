#include <stdio.h>
#include <string.h>

union student
{
    char name[20];
    char subject[20];
    float per;
} s;
void main()
{
    union student record2;
    union student record1;

    strcpy(record1.name, "Ram");
    strcpy(record1.subject, "Maths");
    record1.per = 86.50;
    printf("\nUnion record1\n");
    printf("\n Name:%s", record1.name);
    printf("\n Subject: %s", record1.subject);
    printf("\n Percentage: %.2f", record1.per);

    printf("\n\nUnion record2\n");
    strcpy(record2.name, "Malini");
    printf("\n Name:%s", record2.name);
    strcpy(record2.subject, "Physics");
    printf("\n Subject:%s", record2.subject);
    record2.per = 99.50;
    printf("\n Percentage: %.2f", record2.per);
}