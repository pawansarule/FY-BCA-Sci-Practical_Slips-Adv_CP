#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,n;
    char str[20][20],temp[20];
    printf("\nEnter the number of strings: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(str[i],str[j])<0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nString in descending order are:\n");
    for(i=0;i<=n;i++)
    {
      puts(str[i]);
    }
}