#include<stdio.h>
#include<string.h>

void Search(char s[10][15],int n);
void Display(char s[10][15],int n);
void main()

{
    char s[10][15];
    int n,i;
    printf("\nEnter how many cities : ");
    scanf("%d",&n);
    printf("\nEnter a name of cities : ");
    for(i=0;i<n;i++)
    {
        scanf("%S",s[i]);
    }
    Search(s,n);
    Display(s,n);
}
void Search(char s[10][15],int n)
{
    int i,flag=0;
    char t[10];
    printf("\nEnter name of city to Search : ");
    scanf("%s",t);
    for(i=0;i<n;i++)
    {
        if(strcmp(t,s[i])==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("\nCity name is present serch successful\n");
    else
        printf("\nCity name is not present\n");
}
     void Display(char s[10][15],int n)
{
        int maxlen,len,i;
        maxlen=strlen(s[0]);
        for(i=1;i<n;i++)
    {
        len=strlen(s[i]);
        if(len>maxlen)
        {
            maxlen=len;
        }
    }
    for(i=0;i<n;i++)
    {
        if(strlen(s[i])==maxlen)
        printft("\nCity with longest name is %s",s[i]);
    }
}