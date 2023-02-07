#include<stdio.h>
int main()
{
  int i,j,k,l;
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=(i-1);j++)
    printf(" ");
    for(k=1;k<=(7-2*i);k++)
    printf("*");
    printf("\n");
  }
   printf(" ");
  for(i=1;i<=2;i++)
  {    
    for(j=1;j<=2*i+1;j++)
        printf("*");
    printf("\n");

  }

}
