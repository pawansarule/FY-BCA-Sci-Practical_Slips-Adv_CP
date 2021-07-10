#include <stdio.h>
#include <string.h>

void main()
{
    char s1[20],s2[20];
    int len1=0,len2=0,res;
    printf("\nEnter first string:");
    gets(s1);
    printf("\nEnter second string: ");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    printf("\nThe length of string s1 %d and that of s2 is %d",len1,len2);
    if(strcmp(s1,s2)==0)
    {
        printf("\nstrings are equal");
    }
    else if(strcmp(s1,s2)>0)
    {
        printf("\nString s1 is greater than s2");
    }
    else
    {
        printf("\nString s1 is less than s2" );
    }
}