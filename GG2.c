#include<stdio.h>
int main()
{
  int i,x,p;
  int f=1;
  int s=1;
  printf("input the no.of terms");
  scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
  p=p*x;
  f=f*i;
  s=s+p/f;
 }
 printf("%d",s);
  

}