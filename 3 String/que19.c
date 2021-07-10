#include <stdio.h>
#include <string.h>
void main()
{
    char ch, str[10];
    int i = 0, vcnt = 0;
    printf("\nEnter String (Enter the character '^' to end the string): ");
    do
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    } while (ch != '^');
    str[i] = '\0';
    printf("\nthe entered string is:");
    puts(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))

            vcnt++;
    }
    printf("\nNumber of vowels in the given string is %d\n", vcnt);
}