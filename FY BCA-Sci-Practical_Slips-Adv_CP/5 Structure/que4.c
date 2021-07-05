#include <stdio.h>

struct player
{
    int id, runs, wickets;
    char name[20];
    float avg;
};
void main()
{
    struct player p[10];
    int i, j, n, max;
    printf("\n How Many Cricket Players you want : ");
    scanf("%d", &n);
    printf("\n Enter Player Details : ");

    for (i = 0; i < n; i++)
    {
        printf("\n Enter ID & Name: ");
        scanf("%d%s", &p[i].id, p[i].name);
        printf("\n Enter Number of Runs he/she Scored : ");
        scanf("%d", &p[i].runs);
        printf("\n Enter Number of Wickets he/she took : ");
        scanf("%d", &p[i].wickets);
        p[i].avg = (float)p[i].runs / p[i].wickets;
        printf("\n Average is : %f", p[i].avg);
    }
    max = p[0].runs;
    for (i = 0; i < n; i++)
    {
        if (p[i].runs > max)
        {
            max = p[i].runs;
        }
    }
    printf("\n Player Scoring Maximum Number of Runs: ");
    for (i = 0; i < n; i++)
    {
        if (p[i].runs == max)
        {
            printf("\n%s", p[i].name);
        }
    }
}