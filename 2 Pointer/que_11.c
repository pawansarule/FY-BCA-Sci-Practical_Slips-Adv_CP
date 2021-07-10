#include<stdio.h>
#include<string.h>
int occurence(char *s,char c);
int main()
{
    char s[20],c;
    int pos;
    printf("Enter the string:");
    gets(s);
    printf("Enter the character to be searched:");
    c=getchar();
    pos=occurence(s,c);
    if(pos==0)
    printf("Character is not present in a string\n");
    else
    printf("Character %c occurs first at position %d\n",c,pos);
}
int occurence(char *s, char c)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]==c)
      {
          return i+1;
      }  
    }

    return 0;
}