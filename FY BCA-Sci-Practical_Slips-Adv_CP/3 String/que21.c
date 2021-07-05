#include <stdio.h>
#include <string.h>
void main()
{

    char s1[10], s2[10], s3[10];
    int i;
    do
    {
        printf("\n1: Read two strings");
        printf("\n2: Display two strings");
        printf("\n3: Length of the string");
        printf("\n4: Copy String");
        printf("\n5: Exit");
        printf("\nEnter your choice :");
        scanf("%d", &i);

        switch (i)
        {

        case 1:
            printf("\nEnter first string \n");
            scanf("%s", s1);
            printf("\nEnter second string \n");
            scanf("%s", s2);
            break;

        case 2:
            printf("\nEntered strings are :\n");
            puts(s1);
            puts(s2);
            break;

        case 3:
            printf("\nThe length of the first string is %d", strlen(s1));
            printf("\nThe length of the second string is %d", strlen(s2));
            break;

        case 4:
            strcpy(s3, s1);
            printf("First string copied is %s", s3);
        }
    } while (i != 5);
}