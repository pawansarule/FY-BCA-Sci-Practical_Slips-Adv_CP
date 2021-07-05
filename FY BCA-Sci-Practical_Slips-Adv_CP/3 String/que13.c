#include <stdio.h>
#include <string.h>

int palindrome(char *s);
void main()
{
    char str[10];
    int ans;
    printf("\nEnter the strings:");
    scanf("%s", str);
    ans = palindrome(str);
    if (ans == 1)
        printf("\nThe given string is palindrome...");
    else
        printf("\nThe given string is not palindrome...");
}
int palindrome(char *s)
{
    int len, i, j;
    len = strlen(s);
    for (i = 0, j = len - 1; i <= len / 2; i++, j--)
        if (s[i] != s[j])

            return 0;
    return 1;
}