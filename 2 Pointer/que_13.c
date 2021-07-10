#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p1;
    float *p2;
    char *p3;

    p1=(int *)malloc(sizeof(int));
    p2=(float *)malloc(sizeof(float));
    p3=(char *)malloc(sizeof(char));

    printf("Enter an integer:");
    scanf("%d",p1);
    printf("Enter a float:");
    scanf("%f",p2);
    printf("Enter a character:");
    scanf("%c",p3);
    scanf("%c",p3);
    printf("you Entered:\n");
    printf("%d\t%f\t%c\n",*p1,*p2,*p3);

}