#include<stdio.h>
#include<string.h>

void main()
{
    char str[10][10];
    int i,j,max,n;

    printf("\n Enter how many strings : ");
    scanf("%d",&n); 
    for(i=0;i<n;i++)
    {
         printf("\n enter a string  : ");
         scanf("%s",str[i]);
    }
    max=strlen(str[0]);
    for(i=0;i<n;i++)
    {
        printf("\n string is %s and string length is %d",str[i],strlen(str[i]));
        if(strlen(str[i])>max)
    max=strlen(str[i]);
    }
printf("\n\nLongest string : ");
for(i=0;i<n;i++)
{
    if(strlen(str[i])==max)
    printf("\n%s",str[i]);
}