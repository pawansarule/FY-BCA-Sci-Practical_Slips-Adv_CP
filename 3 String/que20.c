#include <stdio.h>
#include <string.h>
void main()
{

    char *str;
    int i, ccnt = 0, scnt = 0;

    printf("\n Enter a string: ");
    gets(str);
    for (i = 0; *str != '\0'; i++)
    {
        if (*str == ' ')
            scnt++;
        ccnt++;
        str++;
    }
    printf("\nNumber of characters in a string : %d ", ccnt);
    printf("\nNumber of white spaces in a string : %d ", scnt);
}