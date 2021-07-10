#include <stdio.h>
#include <string.h>

int main()
{
    char str[15][10],strt[15];
    int i,j,n;
    printf("\nHow many strings : ");
    scanf("%d",&n);
    printf("\nEnter the strings : ");
    for(i=0;i<n;i++)
    {
         scanf("%s",str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(strt,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],strt);
            }
        }
    }
    printf("\nStrings in ascending order are : \n");
    for(i=0;i<n;i++)
    {
        puts(str[i]);
    }
    printf("\n");
    return 0;
}