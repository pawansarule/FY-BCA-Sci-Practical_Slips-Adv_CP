#include<stdio.h>
#include <string.h>

void reverse(char *,int);
int slen(char *);
void main()
{
    char str[20];
    int len ;
    printf("\nEnter thr string : ");
    gets(str);
    len=slen(str);
    printf("\nLength of %s is : %d",str,len);
    reverse(str,len);
}

int slen(char *s)
{
    int l=0,i;
    for(i=0;*s!='\0';i++)
    {
        i++;
        s++;
    }
    return l;
}
void reverse(char *s,int len)
{
    char *rs;
    int i,j=0;
    for(i=len-1;i>0;i--)
    {
        rs[j++]=s[i];
    }
    rs[j]='\0';
    printf("\nThe reverse string is : %s\n",rs);
}