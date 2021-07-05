#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    int vc=0,cc=0,wc=0,i;
    
    printf("\n Enter the sentence : ");
    gets(str);
    strcat(str," ");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vc++;
        }
        else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A' && str[i]<='z'))
        {
            cc++;
        }
        else if(str[i]==' ')
        {
            wc++;
        }
    }
    printf("\nVowel count : %d",vc);
    printf("\nConsonant count : %d",cc);
    printf("\nWord count : %d",wc);
}