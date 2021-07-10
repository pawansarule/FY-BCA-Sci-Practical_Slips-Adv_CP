#include<stdio.h>
#include<string.h>

void main(int argc,char *argv[])
{
    int i;
    printf("\nNo of strings:%d",argc-1);
    printf("\n\strings with string length :");
    for(i=1;i<argc;i++)
    {
        printf("\n%s\t%d",argv[i],strlen(argv[i]));
    }
}