#include<stdio.h>
void ispal(char*str);
int main()
{
    char str[20];
    printf("Enter a string:");
    gets(str);
    ispal(str);
    return 0;
}
void ispal(char*str)
{
    char *ptr, *rev;
    ptr=str;
    while(*ptr!='\0')
    {
        ++ptr;
    } 
    --ptr;
    for(rev=str; ptr>=rev;)
    {
        if(*ptr==*rev)
        {
            --ptr;
            rev++;
        }
        else break;
    }
    if(rev>ptr)
    printf("The given string %s is palindrome",str);
    else
    printf("The given string %s is not palindrome",str);
}