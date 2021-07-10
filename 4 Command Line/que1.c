#include<stdio.h>
void main(int argc, char *argv[])
{
  int i;
  
  printf("\nThe number of arguments are %d\n", argc);
for(i=0; i<argc;i++)
{
   printf("%s\n", argv[i]);
   }
}