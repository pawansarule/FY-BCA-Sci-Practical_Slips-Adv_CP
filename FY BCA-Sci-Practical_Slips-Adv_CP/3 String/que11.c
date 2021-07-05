#include<stdio.h>
#include<String.h>
#include<ctype.h>

char iscap(char *);
void main()
{
    char str[20],ch;
    printf("\nEnter a string to find its first Capital letter ");
    scanf("%s",str);
    ch=iscap(str);
    if(ch==0)
    {
        printf("\nNo Capital Letter is present in %s ",str);
    }
    else
    {
        printf("\nThe first Capital Letter in %s is %c ",str,ch);
    }
}
char iscap(char *str)
{
    int i=0;
    while(i<strlen(str))
    {
        if(isupper(str[i]))
        {
            return str[i];
        }
        i++;
    }
    return 0;
}