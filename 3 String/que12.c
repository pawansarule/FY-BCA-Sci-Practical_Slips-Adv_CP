#include<stdio.h>
#include<string.h>
int slength(char*str);
main()
{
    char str[20];
    int n=0;
    printf("\n Enter the string");
    gets(str);
    printf("\n The string is %s",str);
    n=slength(str);
    printf("\n length of the string");
}
int slength(char*str)
{
    int i,count=0;
    for(i=0;*str='\0';i++)
    {
         count++;
         str++;
    }
}