#include <stdio.h>
#include <string.h>

struct book
{
    int bid;
    char bname[15];
    char author[15];
};
void main()
{
    struct book d[10], t;
    int i, n, j;
    char strt[20], bk[15][15];

    printf("\nEnter how many books:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter book id:");
        scanf("%d", &d[i].bid);
        printf("\nEnter book name: ");
        scanf("%s", d[i].bname);
        printf("\nEnter book author: ");
        scanf("%s", d[i].author);
    }

    printf("\nBook Details\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Book Id=%d\n", d[i].bid);
        printf("Book Name=%s\n", d[i].bname);
        printf("Book Author=%s", d[i].author);
        printf("\n\n");
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(d[i].bname, d[j].bname) > 0)
            {
                t = d[i];
                d[i] = d[j];
                d[j] = t;
            }
        }
    }
    printf("\nBook details in ascending order of book name: \n");
    for (i = 0; i < n; i++)
    {
        printf("Book Id=%d\n", d[i].bid);
        printf("Book Name=%s\n", d[i].bname);
        printf("Book Author=%s", d[i].author);
        printf("\n\n");
    }
}