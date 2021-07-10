#include <stdio.h>
#include <string.h>
char *reverse(char *);

void main()
{

    char str[10];
    printf("\nEnter the string: ");
    scanf("%s", str);
    printf("\nThe reverse string is %s", reverse(str));
}

char *reverse(char *s)
{

    char rs[20], *p1, *p2;
    int i, j = 0, len;
    p1 = s;
    p2 = rs;
    len - strlen(p1);
    for (i - len - 1; i >= 0; i--)
    {
        p2[j++] = p1[i];
    }
    p2[j] = '\0';
    return p2;
}