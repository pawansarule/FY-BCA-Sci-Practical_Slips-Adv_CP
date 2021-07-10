#include<stdio.h>
#include<string.h>
void snset(char *s,int n);
void main()
{
    int n;
    char s[10];
    printf("\n Enter the string :");
    gets(s);
    printf("\n the enter string is :");
    puts(s);
    printf("\n enter how many characters to be replaced by * :");
    scanf("%d",&n);
    snset(s,n);
    printf("\n the replaced string is : %s",s);
}
void snset(char *s,int n)
{
    int i;
    for(i=0;s[i]!='\0'&&i<n;i++)
            s[1]='*';   
}